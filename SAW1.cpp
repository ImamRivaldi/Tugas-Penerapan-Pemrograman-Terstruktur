#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;

int main(){
	double a1[5]={4,4,5,3,3};
	double a2[5]={3,3,4,2,3}; 
	double a3[5]={5,4,2,2,2};
	
	double Ra1[5];
	double Ra2[5];
	double Ra3[5];
	
	double RWa1[5];
	double RWa2[5];
	double RWa3[5];
		
	double w[5]={5,3,4,4,2};
	double m[5];
	double ha[3];
	
	int i;
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	// AMBIL NILAI MAX TIAP KRITERIA
	for(i=0; i<5; i++){
		m[i]=max(a1[i],max(a2[i],a3[i]));
	}
	
	// BUAT MATRIKS R
	for(i=0; i<5; i++){
		Ra1[i] = (a1[i]/m[i]);
	}
	for(i=0; i<5; i++){
		Ra2[i] = (a2[i]/m[i]);
	}
	for(i=0; i<5; i++){
		Ra3[i] = (a3[i]/m[i]);
	}
	
	// MATRIKS R * W
	for(i=0; i<5; i++){
		RWa1[i] = Ra1[i]*w[i];
	}
	for(i=0; i<5; i++){
		RWa2[i] = Ra2[i]*w[i];
	}	
	for(i=0; i<5; i++){
		RWa3[i] = Ra3[i]*w[i];
	}
	
	// PENJUMLAHAN HASIL R * W	
	for(i=0; i<1; i++){
		ha[i]=RWa1[i]+RWa1[i+1]+RWa1[i+2]+RWa1[i+3]+RWa1[i+4];
		ha[i+1]=RWa2[i]+RWa2[i+1]+RWa2[i+2]+RWa2[i+3]+RWa2[i+4];
		ha[i+2]=RWa3[i]+RWa3[i+1]+RWa3[i+2]+RWa3[i+3]+RWa3[i+4];
	}
	
	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	for(i=0; i<5; i++){
		cout << a1[i] <<" | ";
	} cout<<endl;
	
	for(i=0; i<5; i++){
		cout << a2[i] <<" | ";
	} cout<<endl;
	
	for(i=0; i<5; i++){
		cout << a3[i] <<" | ";
	} cout<<endl;
	
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	for(i=0; i<5; i++){
		cout << Ra1[i] <<" | ";
	} cout<<endl;
	
	for(i=0; i<5; i++){
		cout << Ra2[i] <<" | ";
	} cout<<endl;
	
	for(i=0; i<5; i++){
		cout << Ra3[i] <<" | ";
	} cout<<endl;
	
	cout << endl;
	cout << "MATRIKS R * W :"<<endl;
	for(i=0; i<5; i++){
		cout << RWa1[i] <<" | ";
	} cout<<endl;
	
	for(i=0; i<5; i++){
		cout << RWa2[i] <<" | ";
	} cout<<endl;
	
	for(i=0; i<5; i++){
		cout << RWa3[i] <<" | ";
	} cout<<endl;
}
