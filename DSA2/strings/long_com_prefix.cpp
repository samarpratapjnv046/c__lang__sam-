#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string LongestCommonPrefix(vector<string>&str){
    // sorting of array of string 
    sort(str.begin(),str.end());
    string s1=str[0];//first string
    int i=0;
    string s2=str[str.size()-1];//last string
    int j=0;
    string ans="";
    while(i<s1.size()&& j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;j++;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"enter strings "<<endl;
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"longest common prefix is: "<<LongestCommonPrefix(str)<<endl;
}
// time complexity 1- sorting O(nlogn*n) n is size of string 2- O(min(s[o].size(),s[n-1].size()))
