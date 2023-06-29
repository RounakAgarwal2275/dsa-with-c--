#include <iostream>
using namespace std;
int intersectionarr(int arr1[],int n ,int m,int arr2[]){
	
	for(int i=0;i<n;i++){
		int ele=arr1[i];
		for(int j=0;j<m;j++){
			if(ele==arr2[j]){
			
				cout<<ele;
				arr2[j]=-2;
				break;
				
			}
		}
}

}
int main(){
	
	int arr1[100],arr2[100];
	int n,m;
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
		cout<<arr1[i]<<endl;
	}
	cout<<endl;
	cout<<"printing the array2"<<endl;
	for(int j=0;j<m;j++){
		cout<<arr2[j]<<endl;
	}
	
	intersectionarr(arr1,n,m,arr2);
}
