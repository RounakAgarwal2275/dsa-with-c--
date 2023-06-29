#include <iostream>
using namespace std;
int main(){
	int n,ans=0;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i=i++){
		int digit=n%10;
		ans=ans*10+digit;
		n=n/10;
		
	}
	cout<<ans;
	return 0;
}
