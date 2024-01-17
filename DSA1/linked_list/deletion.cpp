#include<iostream>
using namespace std;
class  node{
    public:
    int data ;
    node *next;
    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    // destructor
    ~node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data."<<value<<endl;
    }
    };
     void print(node*&head){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
void deletenode(int position,node *&head){
    // deleting first or start ndoe
    if(position==1){
        node*temp=head;
        head=head->next;
        // memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        // deleting any middle or last
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++; 
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}
   void  insertAtHeadNode(node*&head,int d){
        
        // new node create 
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
int main(){
    node *node1=new node(10);
      node* head=node1;
    node*tail=node1;
    insertAtHeadNode(head,45);
    insertAtHeadNode(head,5);
   insertAtHeadNode(head,15);
    print(head);
     deletenode(4,head);
    print(head);
    deletenode(2,head);
    print(head);



}