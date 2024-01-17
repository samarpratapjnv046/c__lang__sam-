// fist element is amximum
#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int>maxi;
    // mini heap
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(8);
    maxi.push(9);
    maxi.push(5);
for(int i=0;i<5;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
// cout<<endl;
}
cout<<endl;
mini.push(5);
mini.push(54);
mini.push(51);
mini.push(35);
mini.push(65);
for(int i=0;i<5;i++){
    cout<<mini.top()<<" ";
    mini.pop();
// cout<<endl;
}
cout<<"\nkhali h kya bhai"<<maxi.empty()<<endl;
cout<<"khali h kya bhai"<<mini.empty()<<endl;
}