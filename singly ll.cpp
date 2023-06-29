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
if(head==NULL){
	cout<<"list is empty"<<" ";
}
cout<<endl;
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void eleinsertattail(Node* &tail,int d){
	if(tail==NULL){
	cout<<"list is empty"<<" ";
}
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
void deltenode(Node* &head,Node* &tail,int position){
	if(position==1){
		Node* temp=head;
	head=temp->next;
	temp->next=NULL;
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

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    
}
Node* reverse(Node* head){
	Node* prev=NULL;
	Node* curr=head;
	while(curr!=NULL){
		Node *forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
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
bool iscircular(Node* head){
	if(head==NULL){
	return true;
	}
	Node* temp=head->next;
	while(temp!=NULL&&temp!=head){
		temp=temp->next;
		
	}
	if(temp==head)
	{
		return true;
	}
	else{
		return false;
	}
	
	return false;
}
int main()
{
   Node* node1=new Node(10);
Node* head=node1;
Node *node2=new Node(15);
node1->next=node2;
    Node* tail=node1;
  //  print(head);
    eleinsertathead(head,12);
   // eleinsertattail(tail,15);
//eleinsertatanypos(tail,head,4,5);
//print(head);
//deltenode(head,tail,1);
print(head);
// Node* ans= reverse( head);

//print(ans);
if(iscircular(head)){
    	cout<<"its is circular.";
	}
	else{
			cout<<"its is not circular.";
	}
    return 0;
}

