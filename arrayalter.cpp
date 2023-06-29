#include <iostream>
using namespace std;
int sum=0;
int swapalternate(int arr[],int n){
	for(int i=0;i<n;i=i+2){
	    if(i+1<n){
		swap(arr[i],arr[i+1]);
	    }	
}

return sum;
	
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
	
	swapalternate(arr,n);
	cout<<"printing the array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
}
