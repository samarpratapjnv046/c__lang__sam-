#include<iostream>
#include<stack>
using namespace std;
class Stack{
//  properties 
    public:
    int * arr;
    int top;
    int size;
    // behaviour
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }
    void push(int ele){
        if( (size-top)>1){
           top++;
            arr[top]=ele;
        }
        else
        cout<<"stack overflow"<<endl;
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else
        cout<<"stack is undert flow."<<endl;
    }
    int peak(){
         if (top>=0){
            return arr[top];
         }
         else{
            cout<<"stack is empty"<<endl;
            return -1;
         }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack<int>s;
    // push operation
    /*s.push(6);
    s.push(8);
    s.push(7);
    cout<<"printing top element of the stack"<<s.top()<<endl;
    // pop operation 
    s.pop();
    cout<<"printing top element of the stack"<<s.top()<<endl;
    if(s.empty()){
        cout<<" stack is empty"<<endl;
    }
    else
    cout<<" stack is full."<<endl;
    cout<<"size of stack is : "<<s.size()<<endl;
*/
Stack st(5);
st.push(6);
st.push(4);
st.push(1);
st.push(2);
st.push(9);
// st.push(9);
cout<<"peak: "<<st.peak()<<endl;
if(st.isempty()){
    cout<<"empty hai mere dost."<<endl;
}
else
cout<<"empty nhi h mere dost."<<endl;









return 0;
}