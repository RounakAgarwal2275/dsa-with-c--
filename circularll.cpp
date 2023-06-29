/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
         ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
           next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};

void eleinsertathead(Node* &head,int d){
if(head==NULL){
	cout<<"list is empty"<<" ";
}
cout<<endl;
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void deltenode(Node* &tail,int ele){
        //deleting any middle node or last node
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=ele){
        	prev=curr;
        	curr=curr->next;
		}
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
        return;
}
bool iscircular(Node *tail){
	if(tail==NULL){
	return true;
	}
	Node* temp=tail->next;
	while(temp!=NULL&&temp!=tail){
		temp=temp->next;
		
	}
	if(temp==tail)
	{
		return true;
	}
	else{
		return false;
	}
}
void print(Node* &tail) {
Node*temp=tail;
    do{
    	cout<<tail->data<<" ";
    	tail=tail->next;
	}while(tail!=temp);
	cout<<endl;

}
int main()
{
   Node* node1=NULL;
    Node* tail=node1;
   // eleinsertathead(tail,5);
    //eleinsertatanypos(tail,5,7);
 // deltenode(tail,5);
  //eleinsertatanypos(tail,10,6);
  print(tail);
   if(iscircular(tail)){
    	cout<<"its is circular.";
	}
	else{
			cout<<"its is not circular.";
	}
    return 0;
}

