#include<iostream>
#include<queue>
using namespace std;
int main(){
 
//  create a queue 
queue<int>q;
q.push(11);
q.push(5);
q.push(8);
q.push(9);
q.push(7);
q.push(3);
q.pop();
cout<<"size of queue is :"<<q.size()<<endl;
if(q.empty()){
    cout<<" queue is empty."<<endl;
}
else{
    cout<<"queue is not empty."<<endl;
}
cout<<"front ele is:"<<q.front()<<endl;

return 0;
}