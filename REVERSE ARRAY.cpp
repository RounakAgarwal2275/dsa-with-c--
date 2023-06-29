#include <iostream>
using namespace std;

void reverseofarray(int arr[],int n){
	int j,temp;
	j=n-1;
	for(int i=0;i<j;i++,j--){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
}

cout<<"printing the array after reverse array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

}
}
int main(){
	
	int arr[100];
	int n;
	cout<<"insert the size of array: ";
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
	
	reverseofarray(arr,n);
	return 0;
	
}
