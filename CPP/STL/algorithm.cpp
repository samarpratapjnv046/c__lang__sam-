#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1); 
    v.push_back(6);
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    cout<<"finding 6 :"<<binary_search(v.begin(),v.end(),6)<<endl;
    
    
}