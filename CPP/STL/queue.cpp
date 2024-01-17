#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");
    q.pop();
    cout<<" top element:"<<q.front()<<endl;
    q.pop();
     cout<<" top element:"<<q.back()<<endl;
     cout<<"size of stack is :"<<q.size()<<endl;
     cout<<"empty or not"<<q.empty()<<endl;
     
}