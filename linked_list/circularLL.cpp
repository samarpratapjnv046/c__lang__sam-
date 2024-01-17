#include<iostream>
#include<map>
using namespace std;
class node{
public:
int data;
node*next;
// constructor
node(int d){
    this -> data=d;
    this->next=NULL;
}
~node(){
    int value=this->data;
    if(this->next !=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory is free for node with data."<<value<<endl;   
}
}; 
void insertnode(node* &tail,int element,int d){
    // assuming that element is present in the list 
if(tail==NULL){
    node* newnode=new node(d);
    tail=newnode;
    newnode->next=newnode;
}
else{
    // non empty list
    // assumin that the element is present in the list 
    node* curr=tail;
    while(curr->data !=element){
        curr= curr->next;
    }
    // element found
    node*temp= new node(d);
    temp->next=curr->next;
    curr->next=temp;
}

}
void print(node* &tail){
    // node * temp=tail;
    // cout<<tail->data<<" ";
    // while(tail->next!=temp){
    //     cout<<tail->data<<" ";
    // }
    // cout<<" ";

    // using do while loop
    node * temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deletenode(node* &tail, int value){
    // empty list
    if(tail==NULL){
        cout<<"list is empty please check again "<<endl;
        return;
    }
    // non empty
    // assuming value is present in the list
    node*prev=tail;
    node*curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    // 1 node linked list 
    if(curr==prev){
        tail=NULL;
    }
    // >=2 node
    if(tail==curr){
        tail=prev;  // doubt hai puchhna hai
    }
curr->next=NULL;
 delete curr;

}
bool circularll(node* head){
    if(head==NULL){
        return true;
    }
    node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    if(temp==NULL){
        return false;
    }
}
bool detectloop(node * head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
     node* temp=head;
     while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"present on element:" <<temp->data<<endl;
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
     }
     return false;

}

node* floyddetectloop(node * head){
    if(head==NULL){
        return NULL;
    }
    node* slow=head;
     node* fast=head;
     while(slow!=NULL && fast!=NULL){
        fast =fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            return slow;
        }
     }
     return NULL;
}
node* getstatingnode(node* head){
    if(head==NULL){
        return NULL;
    }
    node* intersection=floyddetectloop(head);
    node* slow=head;
    while(slow!= intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void removeloop(node* head){
    if (head==NULL){
        return;
    }
    node* startofloop=getstatingnode(head);
    node* temp=startofloop;
    while(temp->next!=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;


}
int main(){
    node* tail=NULL;
node *node1=new node(10);

    insertnode(tail,5,9);
    print(tail);
        // empty list me insert 
    insertnode(tail,9,3);
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    deletenode(tail,3);
    print(tail);

   if( circularll(tail)){
    cout<<"LL is circular in nature"<<endl;
   }
   else{
cout<<"ll is not circular in nature"<<endl;
   }
tail->next= node1->next;


    return 0;
    

}
