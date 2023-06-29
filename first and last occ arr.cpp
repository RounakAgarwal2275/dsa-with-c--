#include <iostream>
using namespace std;
int firstoccarray(int arr[],int n,int key){
	int start=0;
	int end=n-1,ans=-1;
    int mid=start+(end-start)/2;
while(start<=end){
		
		if(key==arr[mid]){
	     ans=mid;
	     end=mid-1;
		}
 else if(key>arr[mid]){
			start=mid+1;
			
		
		}
		else{
		end=mid-1;
		}
		
			mid=start+(end-start)/2;
		
		
}
return ans;
}
int secondoccarray(int arr[],int n,int key){
	
	int start=0;
	int end=n-1,ans=-1;
    int mid=start+(end-start)/2;
while(start<=end){
		
		if (key==arr[mid]){
	     ans=mid;
	     start=mid+1;
		}
	 else if (key>arr[mid]){
			start=mid+1;
			
		
		}
		else{
		end=mid-1;
		}
		
			mid=start+(end-start)/2;
		
		
}
return ans;
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
 cout<<"enter the value of key"<<endl;
	cin>>key;
	
int ans=firstoccarray(arr,n,key);
int ans1=secondoccarray(arr,n,key);
cout<<ans<<ans1<<endl;
cout<<"total no of occurence" <<ans1-ans+1;
return 0;
}
