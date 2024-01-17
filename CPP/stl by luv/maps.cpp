#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;

    }
}
 int main(){
    // map is sorted and unsorted both type
    // maps are not continous 
    map<int,string>m;
    m[1]="abc";//O(log(n))
    m[2]="csd";
    m[5]="ram";
    m.insert({4,"afg"});
    m[5]="gsm";
    // first way of printing the map
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    // second way of printing the map
    print(m);
    auto it= m.find(5);//O(log(n))
    // m.find(5);
   if(it==m.end()){
    cout<<"NO value";
   }
   else{
    cout<<(*it).first<<" "<<(*it).second;
   }
 }