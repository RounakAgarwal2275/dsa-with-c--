#include<iostream>
using namespace std;
void reversearr(char name[],int n){
	for(int i=0;i<=n;i++){
		int start=0;int end=n-1;
		swap(name[start],name[end]);
		start++;
		end--;
		
	}
}
int getlen(char name[]){
	int count=0;
	for(int i =0;name[i]!='\0';i++){
		count++;
	}
	return count;
}
int main(){
	
char name[100],n;
	cout<<"enter your name"<<endl;
		cin>>name;
		
	
	cout<<"your name is :";
		cout<<name;

	cout<<endl;
	int len =getlen(name);
	cout<<"Length:"<<len<<endl;
		reversearr(name,len);
		cout<<"printing your name after  reverse :";
		cout<<name;
	
}
