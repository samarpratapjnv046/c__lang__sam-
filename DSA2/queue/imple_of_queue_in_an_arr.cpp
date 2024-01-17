#include<iostream>
using namespace std;
 
class kQueue {
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;
 public:
 kQueue(int n,int k){
    this->n=n;
    this->k=k;
    front=new int[k];
    rear=new int[k];
    for(int i=0;i<k;i++){
        front[i]=-1;
        rear[i]=-1;
    }
    next=new int[n];
    for(int i=0;i<n;i++){
        next[i]=i+1;
    }
    next[n-1]=-1; 
    arr=new int[n];
    freespot=0;
 }
 void enqueue(int data,int qn){
    // check overf;ow
    if(freespot==-1){
        cout<<"no free space is present"<<endl;
        return ;

    }
    // find first free index
    int index=freespot;
    // update freespot
    freespot=next[index];

    // check wheather first element
    if(front[qn-1]==-1){
        front[qn-1]=index;
    }
    // update next
    next[index]=-1;
    // push element
    arr[index]=data;
 }
};
int main(){



    return 0;
}
