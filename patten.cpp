/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<"*";
			
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n,count=1;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<count;
			count++;
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<i;
			
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<n-j+1;
			
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<j;
			
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
			
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n,count=1;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
			
		}
		cout<<endl;
	}
  
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<n-i+1;
			
		}
		cout<<endl;
	}
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<n-i+1;
			
		}
		cout<<endl;
	}
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<i;
			
		}
		cout<<endl;
	}
}*/
/*#include <iostream>
using namespace std;
int main(){
	int n,count=1;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<count;
			count++;
			
		}
		cout<<endl;
	}
}*/
/*#include <iostream>
using namespace std;
int main(){
	char n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<j;
			
		}
		cout<<endl;
	}
  
}*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    
    while(i <= n) {

        int j = 1;
        while(j <= i) {
            cout<<(i-j+1)<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}


