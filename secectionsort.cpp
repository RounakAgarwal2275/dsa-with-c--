#include <iostream>
using namespace std;
int selectionsortofarray(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(arr[minindex],arr[i]);
	}

}
int main(){
	
	int arr[100],key;
	int n;
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
 selectionsortofarray(arr, n);

 cout<<"printing the after sort array"<<endl;
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
 }

return 0;
}
