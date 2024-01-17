#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    string str="hello";
    // reverse function
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    // substring formation
    cout<<str.substr(1,4)<<endl;
    cout<<str.substr(1)<<endl;
    // "+" operator
    string s1="samar";
    string s2="pratap";
    string s3="yadav";
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    cout<<s1+s2+s3<<endl;
    // forcatenatioon of two character array
    char c1[20]="raju";
    char c2[20]="rastogi";
    strcat(c1,c2);
    cout<<c1<<endl;
    // push_back() function of string 
    str.push_back(4);
    char ch='p';
    str.push_back(ch);
    cout<<str<<endl;
    // size of string or char array  str.size() O(1) str.length() O(n)
   cout<< str.size()<<endl;
   cout<<str.length()<<endl;
    //to_string() use to convert numbers to string 
    int num =432;
    string t = to_string(num);
    cout<<t[1]<<endl;
    // sorting of strings  using count sort
    
    return 0;
}
