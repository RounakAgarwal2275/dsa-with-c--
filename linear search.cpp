#include <iostream>
using namespace std;
int key;
void linearsearchofarray(int arr[],int n){
	cout<<"enter the value of key"<<endl;
	cin>>key;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
		cout<<"its is persent in array"<<endl;
		break;
		}
		else{
			cout<<"its is not persent in array"<<endl;
			break;
		}
		
}
}
int main(){
	
	int arr[100];
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
	
	linearsearchofarray(arr,n);
	
}
