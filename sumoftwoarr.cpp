#include<iostream>
using namespace std;
int addtwoarr(int arr1[],int n,int arr2[],int m){
int	i=n-1,j=n-1,sum=0,carry=0,ans=0;
	while(i>=0&&j>=0){
		int val1=arr1[i];
		int val2=arr2[j];
		sum=sum+val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		ans=sum;
			i--;
			j--;
			
		}
		while(i>=0){
		
		sum=arr1[i]+carry;
		carry=sum/10;
		sum=sum%10;
			ans=sum;
			i--;
		
		
		}
		
		while(j>=0){
		sum=arr2[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans=sum;
			j--;
		
			
		}
		while(carry!=0){
		
		sum=carry;
		carry=sum/10;
		sum=sum%10;
			ans=sum;
		}
	cout<<ans;	
}
int main(){
	
	int arr1[100],arr2[100],arr3[100];
	int n,m,k;
	cout<<"insert the size of array1"<<endl;
	cin>>n;
	cout<<"insert the size of array2"<<endl;
	cin>>m;
	cout<<"insert the array1"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"insert the array2"<<endl;
	for(int j=0;j<m;j++){
		cin>>arr2[j];
	}
	
	cout<<"printing the array1"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	cout<<"printing the array2"<<endl;
	for(int j=0;j<m;j++){
		cout<<arr2[j]<<" ";
	}
	cout<<endl;
	
	addtwoarr(arr1,n,arr2,m);
	
}
