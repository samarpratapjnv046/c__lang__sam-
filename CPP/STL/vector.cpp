#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
// vector<int>v(5,1);
// vector having size of 5 and all initialize with 1
cout<<"size :"<<v.capacity()<<endl;

v.push_back(3);
cout<<"size :"<<v.capacity()<<endl;

v.push_back(4);
cout<<"size :"<<v.capacity()<<endl;
v.push_back(5);
cout<<"size :"<<v.capacity()<<endl;
cout<<"size :"<<v.size()<<endl;

cout<<"element at 2nd index "<<v.at(1)<<endl;
cout<<"element at 3rd index "<<v.at(2)<<endl;
cout<<"empty or not "<<v.empty()<<endl;
cout<<"front element "<<v.front()<<endl;
cout<<"back element "<<v.back()<<endl;
v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<"before clear size :"<<v.size()<<endl;
v.clear();
cout<<"before after  size :"<<v.size()<<endl;


}
