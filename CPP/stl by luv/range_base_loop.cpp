#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int>v={2,5,4,6,9};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(int value:v){
        value++;
        // cout<<value<<" ";
    }
    cout<<endl;
    for(int value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    for(int value:v){
        value++;
        cout<<value<<" ";
    }
    cout<<endl;
    vector<pair<int,int>>v_p={{1,2},{4,5}};
        for(pair<int,int>  &value:v_p){
        cout<<value.first<<" ";
    }
    cout<<endl;

    // auto a=1;
    // cout<<a<<" ";
        vector<pair<int,int>>v_p={{1,2},{4,5}};
        for(auto &value:v_p){
        cout<<value.first<<" ";
    }
    cout<<endl; 


 }