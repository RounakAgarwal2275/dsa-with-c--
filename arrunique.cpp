#include <iostream>
using namespace std;
int unique(int arr[],int n,int ans=0){
	for(int i=0;i<n;i++){
	    ans=ans^arr[i];
}

cout<< ans;
	
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
		cout<<arr[i]<<endl;
	}
	
	unique(arr, n);
}
