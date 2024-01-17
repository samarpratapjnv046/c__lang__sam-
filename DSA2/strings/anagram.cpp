#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isAnagram(string s1, string s2){
    // create frequency array 
    vector<int>freq(26,0);
    // if length of both strings are different then return false
    if(s1.length()!= s2.length()){
        return false;
    }
    // store frequency of character in s1 and s2
    for(int i=0;i<s1.length();i++){
    freq[s1[i]-'a']++;  // for s1 we are increamenting the frequency of char
    freq[s2[i]-'a']--;  // for s2 we are decreamenting the frequency of char
    }
    for(int i=0;i<26;i++){
        if(freq[i]){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2)){
        cout<<"strings are anagrams"<<endl;
    }
    else{
        cout<<"strings are not anagrams"<<endl;
    }
return 0;
}
// time complexity O(length of string)
// space complexity O(1)
