#include<iostream>
using namespace std;
class stack{
	public:
	int *arr;
	int top; 
	int size;
   stack(int size){
	this->size=size;
	arr=new int[size];
	top=-1;
    }

void push(int ele){
	if(size - top > 1) {
            top++;
            arr[top] = ele;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
}
void pop(){
	if(top>=0){
		top--;
	}
	else{
		cout<<"its underflow"<<endl;	
	}
} 
int peek(){
	if(top>=0){
	    return arr[top];
	}
	
	else {
    cout<<"its underflow"<<endl;
		return -1;
	}
	
 }
bool empty(){
	if(top==-1){
		return true;
	}


	return false;

}

};

int main(){
	stack s(5);
	if(s.empty()){
		cout<<"its empty"<<endl;
	}
	else{
	cout<<"its not empty"<<endl;
	}
	s.push(5);
	cout<<s.peek();
		if(s.empty()){
		cout<<"its empty"<<endl;
	}
	else{
	cout<<"its not empty"<<endl;
	}
	s.pop();
	return 0;
	
}
