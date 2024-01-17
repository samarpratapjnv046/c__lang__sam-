#include<iostream>
using namespace  std;

class  node{
    public:
    int data ;
    node *next;
    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    };
    void  insertAtHeadNode(node*&head,int d){
        
        // new node create 
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
    void print(node*&head){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtTail(node* &tail, int d){
        node* temp=new node(d);
         tail->next=temp;
        tail=tail->next;
       
    }
    void insertAtPosition( node* &tail,node* &head,int position , int d){
        // insert at head
        if(position==1){
            insertAtHeadNode(head,d);
            return ;
        }
        // insert at tail if length is known 
        /* if(len==position-1){
            insertAtTail(tail,d);
            return;
        }
        */
       
        node *temp=head;
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        // insert at last position
         if(temp->next==NULL){
             insertAtTail(tail,d);
            return;
        }

        // creating a new node
        node* nodeToInsert=new node(d);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
    }

int main(){
    // create a new node
    node *node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    node* head=node1;
    node*tail=node1;
    // insertAtHeadNode(head,12);
    // print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtTail(tail,19);
    print(head);
    insertAtPosition(tail,head,3,22);
    print(head);
    insertAtPosition(tail,head,2,45);
    print(head);
    insertAtPosition(tail,head,6,55);
    print(head);
     insertAtPosition(tail,head,1,9);
    print(head);
    
   

    return 0;
}