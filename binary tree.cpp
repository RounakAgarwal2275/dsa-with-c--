#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
	node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
node* buildtree(node* root){
	cout<<"enter the data"<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1){
	
	return NULL;
}
	cout<<"enter  the for left"<<data<<endl;
	root->left=buildtree(root->left);
	cout<<"enter  the for rigth"<<data<<endl;
	root->right=buildtree(root->right);
	return root;
}
void levelorder(node* root){
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
	}
}
node* buildtreebylevalorder(node* root){
	cout<<"enter the data"<<endl;
		queue<node*>q;

	int data;
	cin>>data;
	root=new node(data);
		q.push(root);
		
		while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
			cout<<"enter data for left"<<temp->data<<endl;
			int leftnode;
			cin>>ledtnode;
			 if(leftdata != -1) {
            temp -> left = new node(leftdata);
            q.push(temp->left);
        }
		
		
			
}
}

int main(){
	node*root=NULL;
	root=buildtree( root);
	levelorder( root);
	
}
