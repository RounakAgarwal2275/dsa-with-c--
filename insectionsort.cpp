/#include <iostream>
using namespace std;
int insertionsortofarray(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>temp){
			arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
		
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
 insertionsortofarray(arr, n);

 cout<<"printing the after sort array"<<endl;
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
 }

return 0;
}
