#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int n,ans;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=0;i<=30;i++){
		ans=pow(2,i);		
	}
	if(ans==n){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
