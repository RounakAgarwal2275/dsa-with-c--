#include <iostream>
using namespace std;
int sumarr(int arr[],int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return arr[0];
	}
	int remainingPart = sumarr(arr+1, n-1);
    int sum = arr[0] + remainingPart;
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
	
cout<<	sumarr(arr,n);
	
}
