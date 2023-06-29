#include <iostream>
using namespace std;
bool issorted(int arr[],int n){
	if(n==0||n==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}

bool remainingPart = issorted(arr+1, n-1);
    return remainingPart;
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
	
cout<<	issorted(arr,n);
	
}
