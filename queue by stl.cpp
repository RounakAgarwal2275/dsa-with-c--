#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>s;
	s.push(5);
		s.push(2);
			s.push(3);
				s.push(56);
				s.pop();
				s.pop();
				if(s.empty()){
					cout<<"queue is empty"<<endl;
				}
				else{
					cout<<"queue is not empty"<<endl;
				}
				cout<<"the top ele of queue:"<<s.front()<<endl;
				cout<<"the size of queue:"<<s.size();
	
	
}
