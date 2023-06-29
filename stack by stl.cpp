#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>s;
	s.push(5);
		s.push(2);
			s.push(3);
				s.push(56);
				s.pop();
				s.pop();
				if(s.empty()){
					cout<<"stack is empty"<<endl;
				}
				else{
					cout<<"stack is not empty"<<endl;
				}
				cout<<"the top ele of stack:"<<s.top()<<endl;
	cout<<"the size of stack:"<<s.size();
	
}
