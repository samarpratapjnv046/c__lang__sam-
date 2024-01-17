// each key is unique
// value may be same
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="love";
    m[11]="babbar";
    m[12]="kumar";
    m[13]="jenny";
    m.insert({5,"bheem"});
     cout<<"before erase"<<endl;
    for(auto i:m){
        // cout<<i.first<<endl;
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<" finding 13 "<<m.count(13)<<endl;
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        // cout<<i.first<<endl;
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        // cout<<i.first<<endl;
        // cout<<i.first<<" "<<i.second<<endl;
        cout<<(*i).first<<endl;
    }
}