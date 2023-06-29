#include<iostream>
using namespace std;

int rotatedsortarr(int arr[],int n){
	int count;
		for(int i=1;i<n;i++){
			if(arr[i-1]>arr[i]){
			
			count++;
		}
}
if(arr[n-1]>arr[0]){
count++;
}
cout<<count;
}
    


int main(){
	
	int arr[100];
	int n,count;
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
//	rotatedsortarr( arr,n);
			if(count<=1){
	cout<<"its rotated and sorted arr."<<endl;
}
		else{
	cout<<"its not rotated and sorted arr."<<endl;
	rotatedsortarr( arr,n);
}
		
}

