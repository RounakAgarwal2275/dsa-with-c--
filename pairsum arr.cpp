#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pairsum(int arr[],int n, int sum){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==sum){
			cout<<arr[i] << arr[j];
			}
		}
	}
}

int main(){
	
	int arr[100];
	int n ,sum=10;
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
	pairsum(arr,n,sum);
}

