#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
if(N==0){
            return 1;
        }
        long long int fac=1;
        for(int i=2;i<=N;i++){
            fac=fac*i;
        }
        
        return fac;
        int y=fac;
    }
    

    int count=0;
   
        
    
   while(y%10==0){
        count++;
        y=y/10;
    }
     return count;
    
}
