#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n;
int ans=0;
 int i=0;
    cin>>n;
while(n!=0){
   
   int bit=n%10;
    
    
    ans=(bit*pow(2,i))+ans;
    n=n/10;
    i++;
}
cout<< ans;
    return 0;
}
