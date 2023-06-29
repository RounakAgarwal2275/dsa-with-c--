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
    Node *prev;
    Node(int data){
        this->data=data;
        this->next=prev;
        this->prev=next;
    }
         ~Node() {
        int value = this -> data;
        //memory free
        if(next != NULL) {
            delete next;
           next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};

void eleinsertatanypos(Node* &tail,int position,int d){
    Node *temp=tail;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev =temp;
}

void deltenode(Node* &head,Node* &tail,int position){
	if(position==1){
		Node* temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		temp->prev=NULL;
		delete temp;
		return;
	}
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
		curr->prev=NULL;
        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    
}

void print(Node* &tail) {
Node*temp=tail;
    do{
    	cout<<tail->data<<" ";
    	tail=tail->next;
	}
	while(tail!=temp);
	cout<<endl;
	return;
}
int main()
{
   Node* node1=new Node(10);
    Node* tail=node1;
   // print(tail);
    eleinsertatanypos(tail,2,5);
   print(tail);
    //eleinsertatanypos(tail,5,00);
  // print(tail);
 // deltenode(tail,5);
 // eleinsertatanypos(tail,10,6);
   // print(tail);
    return 0;
}

