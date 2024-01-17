#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size:"<<v.size()<<endl;
}
int main(){
    /*
    pair<int,string>p;
    //p= make_pair(2,"abc");
    p={2,"absc"};
    // pair<int,string>&p1=p;
    pair<int,string>p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;

int a[]={2,3,6};
int b[]={8,5,9};
pair<int,int> k[3];
k[0]={2,8};
k[1]={3,5};
k[2]={6,9};
swap(k[0],k[2]);
for(int i=0;i<3;i++){
    cout<<k[i].first<<" "<<k[i].second<<endl;
}
// we can take the entries as input 
// cin>>k.first;
*/

// VECTORS
// it is dynamic 

// int a[10];
// vector<data type>name of vector;
/*vector<int>v;
int n;
cin>>n;
for(int i =0; i<n;i++){
    int x;
    cin>>x;
    // printVec(v);
    v.push_back(x);//time complexity O(1)
}
printVec(v); 
*/

// vector<int>v(10,3);
/*
vector<int>v;
v.push_back(7);
v.push_back(6);
vector<int>v2=v;
v2.push_back(5);
printVec(v);
printVec(v2);
// v.pop_back();
// printVec(v);//O(1)
// for chnage in function we should pass the refrence of vector
*/

// NESTED VECTOR


}
