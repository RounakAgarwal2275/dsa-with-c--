#include <iostream>
using namespace std;
int sum=0;
int sumofarray(int arr[],int n){
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		
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
	
	sumofarray(arr,n);
	
}
