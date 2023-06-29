#include<iostream>
#include<bits/stdc++.h>

using namespace std;
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
		cout<<arr[i]<<endl;
	}
sort(arr,arr+n);
	
		cout<<"printing the AFTER SHORTED array"<<endl;
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<endl;
	}
	reverse(arr,arr+n);
		cout<<"printing the AFTER reverse array"<<endl;
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<endl;
	}
	
}
