#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the no : "<<endl;
	cin>>a;
	
	if(a==0){
		cout<<"0 is not even neither odd"<<endl;
	}
	else if(a%2==0){
		cout<<"no is even"<<endl;
	}
	else{
		cout<<"no is odd"<<endl;
	}
	
	
}
