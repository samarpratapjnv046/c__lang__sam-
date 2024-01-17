#include<iostream>
#include<list>
using namespace std;
int main(){
     list<int> l;
    /*list<int> n(5,100);
    //  all numbers initialise with 100 and total 5 number is there
    cout<<"printing n "<<endl;
    for(int i:n){
    cout<<i<<" ";
    }*/
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    for(int i:l){
    cout<<i<<" ";
    }
     cout<<endl;
     l.erase(l.begin());
     for(int i:l){
    cout<<i<<" ";
    }

}