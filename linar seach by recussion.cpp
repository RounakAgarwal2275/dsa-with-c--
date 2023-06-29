#include <iostream>
using namespace std;

bool linearsearchofarray(int arr[],int n,int key){
	if(n==0){
		return false;
	}
	if(arr[0]==key){
		return true;
	}
	else{
		bool remaing=linearsearchofarray(arr+1,n-1,key);
		return remaing;
}
}
int main()
{
	
	int arr[100];
	int n,key;
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
cout<<	linearsearchofarray(arr,n,key);
	
}
