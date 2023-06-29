#include <iostream>
using namespace std;
int pivotelearr(int arr[],int n){
	int start=0;
	int end=n-1;
    int mid=start+(end-start)/2;
	for(int i=0;i<n-1;i++){
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
int binarysearchofarray(int arr[],int n,int key){
	cout<<"enter the value of key"<<endl;
	cin>>key;
	int start=0;
	int end=n-1;
    int mid=start+(end-start)/2;
	for(int i=0;i<n;i++){
		
		if(key==arr[mid]){
	     return mid;
		}
	 if(key>arr[mid]){
			start=mid+1;
			
		
		}
		else{
		end=mid-1;
		}
		
			mid=start+(end-start)/2;
		
		
}
return -1;
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
if(key>=ans&&key<=arr[n-1]){
cout<< binarysearchofarray(arr,n, key);
	
}
else{
cout<<	binarysearchofarray(arr,n, key);
}
}
