#include <iostream>
using namespace std;
int fibb(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
 int no1=0,no2=1;
    cout<<no1 <<" "<<no2<<" ";
    for(int i=1;i<n;i++){
    int next=no1+no2;
    cout<<next<<" ";
    no1=no2;
    no2=next;
    }
}
int main(){
	fibb();
	return 0;
}
