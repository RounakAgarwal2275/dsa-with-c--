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
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};
void eleinsertathead(Node* &head,int d){
cout<<endl;
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void eleinsertattail(Node* &tail,int d){

cout<<endl;
    Node* temp=new Node(d);
    tail->next=temp;
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
    temp->next=nodetoinsert;
}

Node* reversebyrec(Node* head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	Node*chootahead=reversebyrec( head->next);
	head->next->next=head;
	head->next=NULL;
	return chootahead;
}

void print(Node* &head) {
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
      eleinsertathead(head,11);
	eleinsertattail(tail,15);
	eleinsertattail(tail,13);
eleinsertatanypos(tail,head,4,5);
print(head);
Node* ans= reversebyrec(head);
print(ans);
return 0;
}

