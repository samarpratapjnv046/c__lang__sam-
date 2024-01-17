#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    for(int i:d){
    cout<<i<<" ";
    }
    // d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";s
    // }
    /*d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }*/
cout<<"element at 2nd index "<<d.at(1)<<endl;
cout<<"element at 3rd index "<<d.at(2)<<endl;
cout<<"empty or not "<<d.empty()<<endl;
cout<<"front element "<<d.front()<<endl;
cout<<"back element "<<d.back()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase size is :"<<d.size()<<endl;
}
