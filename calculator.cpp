#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	char oper;
	cout<<"enter the num1 :"<<endl;
	cin>>num1;
	cout<<"enter the num2 :"<<endl;
	cin>>num2;
	cout<<"operation that u want"<<endl;
	cin>>oper;
	switch(oper){
		case'+':cout<<(num1+num2)<<endl;
		        break;
		case'-':cout<<num1-num2; 
				break;	
		case'*':cout<<num1*num2;
				break;
		case'/':cout<<num1/num2;
				break;
		default:
		cout<<"invalid";
	}
	return 0;
}
