#include <iostream>
using namespace std;
int largestrowsum(int arr[3][3],int n,int m){
	int maxi=INT_MIN;
	int rowindex;
	for(int i=0;i<3;i++){
	int sum=0;
		for(int j=0;j<3;j++){
		sum =sum+arr[i][j];
}
if(sum>maxi){
	maxi=sum;
	rowindex=i;
}

		
}

cout<<"the maximum sum is :"<<maxi<<endl;
    cout<<rowindex;
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
	largestrowsum(arr,3, 3);

return 0;
	
}
