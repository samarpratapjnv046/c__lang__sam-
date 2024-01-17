#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node *next;
    // constructor
    node(int d){
        this -> data=d;
        this-> prev=NULL;
        this->next=NULL;

    }
        // destructor
    ~node(){
        int value=this->data;
        // memory free
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data."<<value<<endl;
    }
};
// traversing DLL
void print(node * &head){
    node * temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
 
}
// give slengtgh of LL
int getlength(node * &head){
    int cnt=0;
    node *temp=head;
    while(temp != NULL){
        cnt++;
        temp=temp->next;
    }
}
void insertAtHead(node * &head,node*&tail, int d){
    if(head==NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
    node * temp= new node(d);
    temp-> next= head;
    head->prev=temp;
    head=temp;
    }
   
}
void insertAtTail( node* &tail,node* &head, int d){
    if(tail==NULL){
        node* temp= new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node * temp= new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;    
    }

}
void insertAtPosition( node* &tail, node* &head, int position, int d){
    // insert at start
    if(position==1){
    insertAtHead(head,tail,d);
            return;
    }
    node* temp=head;
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        // insert at last position
         if(temp->next==NULL){
             insertAtTail(tail,head,d);
            return ;
        }
         // creating a new node
        node* nodeToInsert=new node(d);
        nodeToInsert->next=temp->next;
        temp->next->prev= nodeToInsert;
        temp->next= nodeToInsert;
         nodeToInsert->prev=temp;  
}
void deletenode(int position,node *&head){
    // deleting first or start ndoe
    if(position==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        
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
       curr->prev=NULL;
       prev->next=curr->next;
       curr->next=NULL;

        delete curr;
    }

}
int main(){
    node * node1= new node(10);
    node* head=node1;
    node* tail=node1;
    // node * head=NULL;
    // node * tail=NULL;
    // print(head);
        cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertAtHead(head,tail,15);
    print(head);
        cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertAtHead(head,tail,5);
    print(head);
        cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertAtHead(head,tail,25);
    print(head);
        cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertAtTail(tail,head,26);
    print(head);
        cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertAtPosition(tail,head,2,100);
    print(head);
    cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
     insertAtPosition(tail,head,1,101);
    print(head);
    cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    deletenode(1,head);
    print(head);
     cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
        deletenode(5,head);
    print(head);
     cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
        deletenode(2,head);
    print(head);
     cout<<" head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

return 0;
}
//  delete case me tail ko handell karna hai home work 
