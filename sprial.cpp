#include <iostream>
using namespace std;
int sprialprintarr(int arr[3][3],int n,int m){
	int count=0;
int	total=n*m;
	int startingrow=0;
	int endingcol=m-1;
	int startingcol=0;
	int endingrow=n-1;
	while(count<total){
		for(int index=startingcol;count<total&&index<=endingcol;index++){
						
			cout<<arr[startingrow][index]<<" ";
			count++;
			}
			startingrow++;
				for(int index=startingrow;count<total&&index<=endingrow;index++){
						
				cout<<arr[index][endingrow]<<" ";
				count++;
			}
			endingcol--;
				for(int index=endingcol;count<total&&index>=startingcol;index--){
						
				cout<<arr[endingrow][index]<<" ";
				count++;
			}
			endingrow--;
				for(int index=endingrow;count<total&&index>=startingrow;index--){
						
				cout<<arr[index][startingcol]<<" ";
				count++;
			}
			startingcol++;
			
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
	cout<<"printing arr in sprial form:"<<endl;
	sprialprintarr(arr,3, 3);

return 0;
	
}
