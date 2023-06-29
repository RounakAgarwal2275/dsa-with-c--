#include <iostream>
using namespace std;
int peakelearr(int arr[],int n){
	int start=0;
	int end=n-1;
    int mid=start+(end-start)/2;
	for(int i=0;i<n-1;i++){
		if(arr[mid]<arr[mid+1]){
	     start=mid+1;
		}
		else{
		end=mid;
		}
		
			mid=start+(end-start)/2;		
		
}
   return arr[start];
}

int main(){
	
	int arr[100],key;
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
 
	
int ans=peakelearr(arr,n);
cout<<ans;
}
