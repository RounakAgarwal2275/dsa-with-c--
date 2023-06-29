#include <iostream>
using namespace std;
int binarysearchofarray(int arr[3][3],int n,int m,int key){
	int start=0;
	int end=n*m-1;
    int mid=start+(end-start)/2;
    int ele=arr[mid/m][mid%m];
	for(int i=0;i<3;i++){
	for(int j=0;j<3;i++){
		
		
		if(key==ele){
	     return mid;
		}
		
	 if(key>ele){
			start=mid+1;		
		}
		else{
		end=mid-1;
		}
	}
		
			mid=start+(end-start)/2;
		
		
}
return -1;
}
int main(){
	
	int arr[3][3],key;
	cout<<"insert the array"<<endl;
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
		cin>>arr[i][j];
	}
}
	cout<<"printing the array"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
	
		cout<<arr[i][j]<<" ";
 }
 cout<<endl;
}
	cout<<"enter the value of key"<<endl;
	cin>>key;
int ans=binarysearchofarray(arr,3,3,key);
cout<<ans;
return 0;
}
