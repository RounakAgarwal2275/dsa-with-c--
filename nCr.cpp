#include <iostream>
using namespace std;
int fac(int n,int fac=1){
	for(int i;i<n;i++){
	
		fac=fac*i;
	}
		return fac;
}

	
int nCr(int r,int n){
	int dem=fac(r)*fac(n-r);
	int num=fac(n);
	return num/dem;
}
int main(){
	int n,r;
	cout<<"enter the value of n"<<endl;
	cin>>n;
		cout<<"enter the value of r"<<endl;
	cin>>r;
     cout<<"cobination :"<<nCr(n,r);
     return 0;
}
