#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the 1 no : "<<endl;
	cin>>a;
	cout<<"Enter the 2 no : "<<endl;
	cin>>b;
	cout<<"Enter the 3 no : "<<endl;
	cin>>c;
	
	if(a+b>c&&b+c>a&&a+c>b){
		cout<<"triangle is valid"<<endl;
	}
	
	else{
	cout<<"triangle is not  valid"<<endl;
	}
	
	
}
