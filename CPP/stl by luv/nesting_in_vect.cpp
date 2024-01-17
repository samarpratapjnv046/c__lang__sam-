#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    // void printVec(vector<pait<int,int>>v){
    for(int i=0;i<v.size();i++){
        // cout<< v[i].first<<" "<<v[i].second<<endl;
    cout<<v[i];
    }
    cout<<endl;
    cout<<"size:"<<v.size()<<endl;
}
int main(){
    // vector<pair<int,int>>v={{1,2},{2,3},{4,5}};
    // vector of pairs 
   /* vector<pair<int,int>>v;
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});

    }
    printVec(v);
    */

// array of vectors 
// vector<int>v[10];
int m;
cin>>m;
vector<int>v[m];
for(int i=0; i<m;++i){
    int n;
    cin>>n;
    vector<int>temp;

    for(int j=0;j<n;++j){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    // v.push_back(temp);
}
for(int i=0;i<m;++i){
    printVec(v[i]);
}


}