#include <iostream>
using namespace std;
int factor(int a){
	for(int i=1;i<a;i++){
		if(a%i==0){
			cout<<i<<" ";
		}
	}
}

int main(){
	int a,b;
	cout<<"enter the value of A"<<endl;
	cin>>a;	
	int ans=factor(a); 
	cout<<ans;   
     return 0;
}
