#include <iostream>
using namespace std;
int partion(int arr[],int s,int e){
	int pivot=arr[s];
	int count=0;
	for(int i =s+1;i<=e;i++){
		if(arr[i]<=pivot){
		
		count++;
	}
	}
int pivotindex=s+count;
swap(arr[pivotindex],arr[s]);
 int i = s, j = e;

    while(i < pivotindex && j > pivotindex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotindex && j > pivotindex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotindex;

}
void quicksortarray(int arr[],int s,int e){
	if(s>=e)
		return;
  int p=partion(arr,s,e);
  quicksortarray( arr,s,p-1);
  quicksortarray(arr,p+1,e);
  
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
  quicksortarray(arr,0,n-1);
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
 }

return 0;
}
