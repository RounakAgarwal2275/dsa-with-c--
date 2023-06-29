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

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int getlen(Node* head){
	int len=0;
	while(head!=NULL){
		len++;
		head=head->next;
	}
return len;
}
int findmidle(Node* head){
    int len=getlen(head);
    int ans=(len/2);
    Node* temp=head;
    int count=0; 
    while(count<ans){
        temp=temp->next;
        count++;
    }
    return temp->data;
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
	eleinsertattail(tail,1);
	print(head);
	int a=getlen(head);
    cout<<"the len of :"<<a<<endl;
    int ans = findmidle(head);

	cout<<ans;
	return 0;
}

