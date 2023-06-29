#include<iostream>
using namespace std;
int rotatedarr(int arr[],int n,int k,int temp[]){
		for(int i=0;i<n;i++){
			temp[(i+k)%n]=arr[i];
}
        for(int i=0;i<n;i++) 
      {
        arr[i] = temp[i];
      }
      
}
int main(){
	
	int arr[100],temp[100];
	int n,k,m,j ;
	cout<<"insert the size of array"<<endl;
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
	cout<<"rotation by num:"<<endl;
	cin>>k;
	rotatedarr(arr,n,k,temp);
		cout<<"printing the array after rotation"<<endl;
	
}

