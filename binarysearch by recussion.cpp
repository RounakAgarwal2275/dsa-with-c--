#include <iostream>
using namespace std;
bool binarysearchofarray(int arr[],int start,int end,int key){
    	
		if(start>end)
			return false;
			int mid=start+(end-start)/2;
			if(arr[mid]=key)
			return true;
			
	 if(key>arr[mid]){
			start=mid+1;
			binarysearchofarray(arr,start,end,key);
		}
		else{
		end=mid-1;
			binarysearchofarray(arr,start,end,key);
		}
		
			mid=start+(end-start)/2;		
}


int main(){
	
	int arr[100],key;
	int n,start,end;
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
 	cout<<"enter the value of key"<<endl;
	cin>>key;
cout<<binarysearchofarray(arr,start,end,key);
return 0;
}
