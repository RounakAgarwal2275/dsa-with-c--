#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
int n;
int reversearr(int arr[],int n){
	for(int i=0;i<=n;i++){
		int start=0;int end=n-1;
		swap(arr[start],arr[end]);
		start++;
		end--;
		
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
	//reverse(arr,arr+n);
	int start,end;
	reversearr(arr,n);
		cout<<"printing the AFTER reverse array"<<endl;
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}
	
}
