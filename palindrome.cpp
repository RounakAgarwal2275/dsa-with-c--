#include<iostream>
using namespace std;
bool palindrome(char name[],int n){
		int start=0;int end=n-1;
		while(start<=end){
	
		if(name[start]!=name[end]){
		return  0;
		}
		
		else{
				start++;
		end--;
			
		}
		
		
	}
	return 1;
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
	cout<<palindrome(name,len);
}
