#include<bits/stdc++.h>
using namespace std;
struct node {
     string str;
     int num;
     double doub;
     char x;
};
int main(){
// SET
// given n elements then tell me the unique elements 
int arr[]={1,5,4,2,3,1,5};
set<int>st;
int n; cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.insert(x);
}
cout<<st.size()<<endl;
// time complexity is log(N)
// set is already sorted asending order and we can not find the value of set elements like array
// for accessing we use iterator function
// st={1,2,3,4,5}
st.erase(st.begin());//{2,3,4,5}
//st.erase(st.begin(), st.begin() + 2);//st={2,4,5}
//st.erase(start,end);
//st.erase(key);
set<int>st={1,25,43,9};
auto it=st.find(9);//log(n)//it will be at iterator 9
auto it=st.find(91);//it=st.end();
st.emplace(6);//add 6 to the set 

set<int>st;
st.insert(5);//st-{5}
st.insert(6);//st{5,6}
for(auto it=st.begin();it!=st.end();it++){
    cout<<*it<<" ";
}
for(auto it:st){
    cout<<it<<endl;
}

unordered_set<int>st;
st.insert(2);
st.insert(8);
st.insert(4);
st.insert(3);
// average timr complexity is O(1)
//but in worst case is linear in nature O(set size);
st.clear();
// all other function of st will work on unorder set 


// MULTISET
multiset<int>ms;
ms.insert(5);
ms.insert(4);
ms.insert(8);
ms.insert(4);
ms.insert(9);//ms,emplace(9);
// all elements is sorted way
ms.erase(9);
auto it=ms.find(2);
ms.clear();
ms.erase(ms.begin(),ms.end());
//log(n) in size
//it stores duplicate also 
for(auto it=ms.begin();it!=ms.end();it++){
    cout<<*it<<" ";
}
for(auto it:ms){
    cout<<it<<endl;
}
ms.erase(ms.find(9));
//ms.erase(ms.begin(),ms.begin()+2);
//find how many times  NUMBERS IS OCCUR 
ms.count(2);

// MAP
map<string,int>mpp;
mpp["raj"]=96;
mpp["raju"]=98;
mpp["raje"]=96;
mpp["raji"]=92;
mpp["rajo"]=91;
mpp["raj"]=99;
//(raj,96),(raju.98).....
// it will store unique elements
// it will do over right 
mpp.emplace("raj",45);
mpp.erase("raj");//mpp.erase(key)
mpp.erase(mpp.begin());//mpp.erase(iterTOR)
mpp.clear();//clean entire mpp
// mpp.erase(mpp.begin(),mpp.begin()+2);
auto it=mpp.find("raj");//point to where raj lies in the set
if(mpp.empty()){
    cout<<"yes"<<endl;
}
mpp.count("raj");//always stores 1 bcz multiset stores only one
pair<int,int>pr;
pr.first=1;
pr.second=2;
//print map
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
}
for(auto it=mpp.begin();it!=mpp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<" strivers bsdk code run kar liya kar "<<endl;

unordered_map<int,int>mpp;
// unordered_map<pair<int,int>,int>mpp; not define
//O(1) in almost all cases
//O(n) inn the worst cases where n is the container size
/*pair<int,int>pr={1,2};
pair<pair<int,int>,int>pr={{1,2},2};
cout<<pr.first.second<<endl;
pair<pair<int,int>,pair<int,int>>pr={{1,2},{2,4}};
cout<<pr.first.first; //-> 1
cout<<pr.second.second<<endl;//4

*/
 vector<pair<int,int>>vec;
 set<pair<int,int>>st;
 map<pair<int ,int>,int>mpp;


 multimap<string,int>mpp;
 mpp["raj"]=2;
 mpp["raj"]=4;


multimap<string,int>mpp;
mpp.emplace("raj",2);
mpp.emplace("raj",5);




    return 0;
}