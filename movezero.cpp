#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
int movezero(int arr[],int n){
	for(int j=1;j<n;j++){
	
	for(int i=0;i<n;i++){
		if(arr[i]==0){
		
			swap(arr[i],arr[i+1]);
		}
	}
}
}
int main(){
	
	int arr[100];
	int n;
	cout<<"insert the size of array"<<endl;
	cin>>n;
	cout<<"insert the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"printing the array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	movezero(arr,n);
		cout<<"printing the AFTERmove zero array"<<endl;
for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
