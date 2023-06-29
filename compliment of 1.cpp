#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	int m=n;
	int mask=0;
	if(n==0){
	cout<< 1;
	}
	while(n!=0){
		mask=(mask<<1)||1;
		n>>1;
	}
		int ans=(~n)&mask;

cout<<ans;
}
