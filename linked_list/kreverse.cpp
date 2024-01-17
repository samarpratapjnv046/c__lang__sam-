/*
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
*/
/*
Node* kReverse(Node* head, int k) {
    // Write your code here.
    // base case 
    if(head==NULL){
        return NULL;
    }
    // reverse first k nosea
    Node* next=NULL;
       Node*curr=head; 
    Node* prev=NULL;
 
    int count=0;

     while(curr !=NULL && count<k ){
         next=curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
         count++;
     }

    //  recursive call
     if (next != NULL) {
         head->next = kReverse(next, k);
     }
     // return head of reverse list
     return prev;
}
*/
