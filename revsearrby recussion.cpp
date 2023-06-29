#include<iostream>
using namespace std;
void reversearr(string& name,int n){
		int start=0;int end=name.length()-1;
		if(start>end)
		return ;
		swap(name[start],name[end]);
		start++;
		end--;
		reversearr(name,n);	
		
	}
	
int main(){
	
string name;
	cout<<"enter your name"<<endl;
		cin>>name;
		
	
	cout<<"your name is :";
		cout<<name;

	cout<<endl;
	
		cout<<"printing your name after  reverse :";
         reversearr(name,name.length()-1);
return 0;
	
}
