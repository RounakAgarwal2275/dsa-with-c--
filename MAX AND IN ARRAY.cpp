#include <iostream>
using namespace std;

int maxofarray(int arr[],int n){
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]>arr[j])
				maxi=i;
		}
		
		}
			cout<<"the max element is"<<maxi<<endl;	
	
}
int minofarray(int arr[],int n){
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		mini=min(arr[i],mini);
		}
			cout<<"the min element is"<<mini<<endl;	
	
}


int main(){
	int maxi;
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
	
	maxofarray(arr,n);
	minofarray(arr,n);	
	return 0;
	
}
