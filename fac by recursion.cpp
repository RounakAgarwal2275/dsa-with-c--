#include <iostream>
using namespace std;
int fac(int n){
	if(n==0)
		return 1;
	
	return fac(n-1)*n;
	
}

int main(){
	int n ;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	cout<<fac(n);
}

