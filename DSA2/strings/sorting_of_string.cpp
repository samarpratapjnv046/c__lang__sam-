#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// storing frequency of  every character in string 
// time complexity O(size of string)
// space complexity  constant
    string countsort(string str){
        vector<int>freq(26,0);
        for(int i=0;i<str.size();i++){
            int index = str[i]-'a';
            freq[index]++;
        }
        // create our sorted string 
        int j=0;
        for(int i=0;i<26;i++){
            while(freq[i]--){
                str[j++]=i +'a';
            }
        }
        return str;
    }
    int main(){
        string str;
        cin>>str;
       cout<<countsort(str);
    }