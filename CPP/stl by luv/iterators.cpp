#include<bits/stdc++.h>
using namespace std;
int main(){
// s 
/*vector<int>::iterator it=v.begin();
cout<<(*it)<<endl;
cout<<(*(it+1))<<endl;
 /*it++  it means next iterator 
  it+1 means next location not valid in case of maps and sets */
vector<pair<int,int>>v_p={{1,2},{5,4},{9,8}};
vector<pair<int,int>>::iterator it;
for(it=v_p.begin();it!=v_p.end();++it){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
for(it=v_p.begin();it!=v_p.end();++it){
    cout<<(it->first)<<" "<<(it->second)<<endl;

}
// (*it).first<=> (it->first)



}