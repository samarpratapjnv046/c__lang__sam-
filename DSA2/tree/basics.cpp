#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};
node* buildtree(node *root){
    cout<<"enter the data for node"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for insert in in left"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data for insert in in right"<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}
void levelOrderTraversal(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){// level change 
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}
void inorder(node* root){
    // base case 
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
        // base case 
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}

void postorder(node * root){
    // base case 
    if(root==NULL){
        return ;
    }
    
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildfromlevelorder(node * &root){
    queue<node*>q;
    cout<<"enter the data for root:"<<endl;
    int data;
    cin>>data;
    root =new node(data);
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<"enter left node for : "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter right node for : "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main(){
node* root = NULL;  
buildfromlevelorder(root);
levelOrderTraversal(root);


// creating the tree
// 1 3 7 -1 -1 5 17 -1 -1 -1
/*
root =buildtree(root);
cout<<"printing the level order traversal."<<endl;
levelOrderTraversal(root);



cout<<"inorder traversal is :"<<endl;
inorder(root);
cout<<endl;
cout<<"pre order traversal:"<<endl;
preorder(root);
cout<<endl;
cout<<"printing  in postorder:"<<endl;
postorder(root);
*/
return 0;
}