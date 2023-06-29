#include <iostream>
using namespace std;
int pivotelearr(int arr[],int n){
	int start=0;
	int end=n-1;
    int mid=start+(end-start)/2;
	while(start<end){
		if(arr[mid]>=arr[0]){
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
 
	
int ans=pivotelearr(arr,n);
cout<<ans;
}
