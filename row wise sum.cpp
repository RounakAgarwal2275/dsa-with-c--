#include <iostream>
using namespace std;
int rowwisesum(int arr[3][3],int n,int m){
		cout<<"printing sum:";
	for(int i=0;i<3;i++){
	int sum=0;
		for(int j=0;j<3;j++){
		sum =sum+arr[i][j];
}
cout<<sum<<" ";
		
}
}
int main(){
	
	int arr[3][3];
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
rowwisesum(arr,3,3);
return 0;
	
}
