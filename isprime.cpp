#include <iostream>
using namespace std;
bool isprime(int n){
	for(int i=2;i<n;i++){
	if(n%i==0){
		return 0;
	}
	
}
return 1;
}
int main(){
	int n;
	cout<<"enter the value of n: "<<endl;
	cin>>n;
	if(isprime(n)){
		cout<<"not prime";
	}
	else{
		cout<<"prime";
	}
	return 0;
}
