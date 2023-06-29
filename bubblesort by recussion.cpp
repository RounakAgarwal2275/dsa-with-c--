#include <iostream>
using namespace std;
void bubblesortofarray(int arr[],int n){
	if(n==0||n==1)
		return;
	for(int j=0;j<n-1;j++){
		if(arr[j]>>arr[j+1]){
		
		swap(arr[j],arr[j+1]);	
	}
	}
	bubblesortofarray(arr,n-1);

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


 cout<<"printing the after sort array"<<endl;
  bubblesortofarray(arr,n);
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
 }

return 0;
}
