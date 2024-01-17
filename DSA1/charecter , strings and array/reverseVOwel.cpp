 /*#include<iostream>
    using namespace std;
     char  T(char ch){
       if(ch>='a'&& ch<='z'){
        return ch;
       }
       else{
        char temp = ch-'A'+'a';
        return temp;
       }
    }
    string reverseVowels(string s) {
       
        int i=0;
        int e=s.size()-1;
        while(i<e){
            if(T(s[i])=='a'||T(s[i])=='e'||T(s[i])=='i'||T(s[i])=='o'||T(s[i])=='u'){
                while(i<e){
                    if(T(s[e])=='a'||T(s[e])=='e'||T(s[e])=='i'||T(s[e])=='o'||T(s[e])=='u'){
                        swap(s[i],s[e]);
                        break;
                    }
                    else{
                        e--;
                    }
                }
            }
             else{
            i++;
             }
        }
        return s;
    }
    int main(){
        string s;
        s="leetcode";
        cout<<reverseVowels(s);
        
    }*/

    #include<iostream>
    using namespace std;
    int main(){
        string s;
        s="race car";
        int n=s.size();
        cout<<n;
    }