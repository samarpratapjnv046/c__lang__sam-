#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(10);
    s.insert(11);
    s.insert(5);
    s.insert(5);
    s.insert(50);
    s.insert(10);
    s.insert(11);
    s.insert(50);
    for(auto i:s){
        cout<<i<<" ";
// time complexity o(nlg(n))
    }
    cout<<endl;
/*
     s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" ";
    }*/

set<int>::iterator it=s.begin();
it++;
s.erase(it);
for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;
cout<<" 5 present or not "<<s.count(5)<<endl;
cout<<" -5 present or not "<<s.count(-5)<<endl;
 set<int>::iterator itr=s.find(5);
 for(auto it=itr; it!=s.find(5);it++){
    cout<<*it<<" ";
 }
} 