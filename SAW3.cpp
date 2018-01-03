#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	cout << "MATRIKS X : "<<endl;
	double a[3][5]= {
	{4,4,5,3,3}, {3,3,4,2,3}, {5,4,2,2,2}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" | ";
		}cout<<endl;
	}
	
	cout<<endl<<"MATRIKS R : "<<endl;
	double ra[5];
	for(int i=0;i<5;i++) {
		ra[i+1]=max(a[0][i],max(a[1][i],a[2][i]));
	}
	double Ra[3][5]={
	{(a[0][0]/ra[1]), 
	 (a[0][1]/ra[2]), 
	 (a[0][2]/ra[3]), 
	 (a[0][3]/ra[4]), 
	 (a[0][4]/ra[5])},
	{(a[1][0]/ra[1]), 
	 (a[1][1]/ra[2]), 
	 (a[1][2]/ra[3]), 
	 (a[1][3]/ra[4]), 
	 (a[1][4]/ra[5])},
	{(a[2][0]/ra[1]), 
	 (a[2][1]/ra[2]), 
	 (a[2][2]/ra[3]), 
	 (a[2][3]/ra[4]), 
	 (a[2][4]/ra[5])}
	};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<Ra[i][j]<<" | ";
		}cout<<endl;
	}
}
