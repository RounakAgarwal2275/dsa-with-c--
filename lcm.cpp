#include <iostream>
using namespace std;
int gcd(int a,int b){
if(a==0)
return b;
if(b==0)
return a;
if(a!=b){
	a=a-b;
}
else{
	b=b-a;
}
return b;


}

int main(){
	int a,b;
	cout<<"enter the value of A"<<endl;
	cin>>a;
		cout<<"enter the value of B"<<endl;
		cin>>b;
	int ans=gcd(a,b);
     cout<<"the gcd of"<<a<<" & "<<b<<"is"<<" "<<ans;
     cout<<endl;
     int lcm=a*b/(ans);
     cout<<"the lcm of"<<a<<" & "<<b<<"is"<<" "<<lcm;
     return 0;
}
