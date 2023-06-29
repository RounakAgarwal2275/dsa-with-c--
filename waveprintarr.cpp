#include <iostream>
using namespace std;
int waveprintarr(int arr[3][3],int n,int m){
	for(int j=0;j<3;j++){
		if(j%2==0){
			for(int i=0;i<3;i++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=n-1;i>=0;i--){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
int main()
{
	
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
	cout<<"printing arr in wave form:"<<endl;
	waveprintarr(arr,3, 3);

return 0;
	
}
