/*#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"enter the name :"<<endl;
    // name=cin.get();
    // cin>>name;
     gets(name);
    cout<<name<<endl;
}*/

// #include<iostream>
// using namespace std;
// int getLength(char name[]){
//     int count=0;
//    /*for(int i=0;name[i]!='\0';i++){
//         count++;
//     }*/
//     int i=0;
//     while(name[i]!='\0'){
//         count++;
//         i++;
//     }
//     return count;
// }
// int main(){
//     char name[50];
//     cout<<"enter the name:"<<endl;
//     // cin>>name;
//     gets(name);
//     cout<<"size os string is:"<<endl;
//     int n=getLength(name);
//     cout<<n;
// }


// reverse string
/*#include<iostream>
#include<cstring>
using namespace std;
void reversestring(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
     cout<<"reverse of name is : "<<name;
    }
    int main(){
        char name[30];
        cout<<"enter the name"<<endl;
        gets(name);
        int n=strlen(name);
        reversestring(name,n);  
    }*/


    // check palindrome
    /*#include<iostream>
    #include<cstring>
    using namespace std;
    bool checkPalindrome(char name[],int n){
    int s=0;
    int e =n-1;
        while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    }
    int main(){
        char name[30];
        cout<<"enter the name:"<<endl;
        gets(name);
        int n=strlen(name);
        cout<<"palindrome hai ya nhi:"<<checkPalindrome(name,n);
    }*/


    #include<iostream>
    #include<cstring>
    using namespace std;
    char  tolowercase(char ch){
       if(ch>='a'&& ch<='z'){
        return ch;
       }
       else{
        char temp = ch-'A'+'a';
        return temp;
       }
    }
    bool checkPalindrome(char name[],int n){
    int s=0;
    int e =n-1;
    int i=0;
        while(s<=e){
        if(tolowercase(name[s])!=tolowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    }
    int main(){
        char name[30];
        cout<<"enter the name:"<<endl;
        gets(name);
        int n=strlen(name);
        cout<<"palindrome hai ya nhi:"<<checkPalindrome(name,n);
    }

