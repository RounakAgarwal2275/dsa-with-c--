#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
int meargsortarr(int arr1[],int n,int arr2[],int m,int k,int arr3[]){
int	i=0,j=0;
	while(i<n&&j<m){
		if(arr1[i]<arr2[j]){
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		else{
			arr3[k]=arr2[j];
			i++;
			j++;
		}
		
	}
	while(i<n){
		arr3[k]=arr1[i];
			i++;
			k++;
	}
		while(j<n){
		arr3[k]=arr2[j];
			j++;
			k++;
	}
}
int main(){
	
	int arr1[100],arr2[100],arr3[100];
	int n,m,k;
	cout<<"insert the size of array1"<<endl;
	cin>>n;
	cout<<"insert the size of array2"<<endl;
	cin>>m;
	cout<<"insert the array1"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"insert the array2"<<endl;
	for(int j=0;j<m;j++){
		cin>>arr2[j];
	}
	
	cout<<"printing the array1"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	cout<<"printing the array2"<<endl;
	for(int j=0;j<m;j++){
		cout<<arr2[j]<<" ";
	}
	cout<<endl;
	//reverse(arr,arr+n);
	meargsortarr(arr1,n,arr2,m,k,arr3);
		cout<<"printing the AFTER mearg sort array"<<endl;
	//meargsortarr(arr1,n,arr2,m,k,arr3);
	for(int i=0;k<n+m;k++){
		cout<<arr3[k]<<" ";
	}
	
}
