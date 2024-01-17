#include<iostream>
#include<stack>
using namespace std;
stack<string> s;
int main(){
   s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<" top element:"<<s.top()<<endl;
    s.pop();
     cout<<" top element:"<<s.top()<<endl;
     cout<<"size of stack is :"<<s.size()<<endl;
     cout<<"empty or not"<<s.empty()<<endl;
     
}