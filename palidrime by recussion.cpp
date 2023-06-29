#include<iostream>
using namespace std;
bool palidrome(string name,int start,int end){
	
		if(start>end)
		return true ;
		if(name[start]!=name[end]){
			return false;
		}
		else{
        //Recursive call
       bool rem=palidrome(name, start+1,end-1);
       return rem;
    }
}
int main(){
string name="noon";
int start,end;
cout<<	palidrome(name,0,name.length()-1);
return 0;	
}
