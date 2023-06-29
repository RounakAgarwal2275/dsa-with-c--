#include <iostream>
using namespace std;

int main(){
	int pro=1,sum=0,n;
	cout<<"enter the no:"<<endl;
	cin>>n;
while(n!=0){
		int digit=n%10;
		pro=pro*digit;
		sum=sum+digit;
		n=n/10;
	}
	cout<<"product is :"<<pro<<endl;
	cout<<"sum is :"<<sum<<endl;
	
	
	return 0;
}
