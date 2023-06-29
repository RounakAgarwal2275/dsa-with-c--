#include <iostream>
using namespace std;
int main(){
	char a;
	cout<<"Enter the no : "<<endl;
	cin>>a;
	
	if(a>=97&&a<=122){
		cout<<"lower case"<<endl;
	}
	else if(a>=65&&a<=90){
		cout<<"upper case"<<endl;
	}
	else if(a>=48&&a<=57){
		cout<<"numeric value"<<endl;
	}
	else{
		cout<<"special character"<<endl;
	}
	
	
}
