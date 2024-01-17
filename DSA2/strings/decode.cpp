#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string decodedString(string s){
    // traversing the encoded strings 
    string results="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=']'){
            results.push_back(s[i]);
        }
        else{
            //extract str from result
            string str="";
            while(!results.empty() && results.back()!='['){
                str.push_back(results.back());
                results.pop_back();
            }
            // reversing the string
            reverse(str.begin(),str.end());
            // remove last character from result which is [
            results.pop_back();
            // extract num from result
            string num="";
            while(!results.empty() && (results.back()>='0' && results.back()<='9')){
                num.push_back(results.back());
                results.pop_back();
            }
            // reversing the num string
            reverse(num.begin(),num.end());
            // convert string to integer 
            int int_num=stoi(num);
            // inserting str in results int_num times
            while(int_num){
                results+=str;
                int_num--;
            }
        }
    }
        return results;
}
int main(){
     string str;
     cin>>str;
     cout<<decodedString(str)<<endl;
    return 0;
}
// 1[a2[b3[c]]] input type 
// time complexity  O(n) where n is length of decoded string
// space complexity O(n)   //where n is length of decoded string