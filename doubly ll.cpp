
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
void eleinsertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void eleinsertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
     temp->prev=tail;
    tail=temp;
}
void eleinsertatanypos(Node* &tail,Node* &head,int position,int d){
    if(position==1){
       eleinsertathead(head,d);
       return ;
    }
    Node *temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        eleinsertattail(tail,d);
        return ;
        
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
Node* reverse(Node* head){
	Node* prev=NULL;
	Node* curr=head;
	Node* next=NULL;                                  
	while(curr!=NULL){
		 next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
return prev;
}
void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
   Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    eleinsertathead(head,12);
    eleinsertattail(tail,15);
eleinsertatanypos(tail,head,4,5);
print(head);
//deltenode(head,tail,1);
 Node* ans= reverse( head);
print(ans);
    return 0;
}

