#include <iostream>
using namespace std;
bool linearsearchofarray(int arr[5][5],int n,int m,int key){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		if(arr[i][j]==key){
		return 1;
		}

}
		
}
return 0;
}
int main(){
	
	int arr[5][5];
	cout<<"insert the array"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		
		cin>>arr[i][j];
	}
}
	cout<<"printing the array"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	
	}
	int key;
	cout<<"enter the value of key:";
	cin>>key;
	cout<<endl;
	linearsearchofarray(arr,5,5,key);
	
}
