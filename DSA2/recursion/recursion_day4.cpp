#include<iostream>
using namespace std;
// reversing of a given string using recursion 
/*void reverse(string &str,int i,int j){
    cout<<"call recieve for babbar :"<<str<<endl;
    //base case 
    if(i>j)
    return ;
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);
}
*/

// palindrome if string and reverse string both iare equal
bool checkpalindrome(string str,int i,int j){
    if(i>j)
    return true ;
    if(str[i]!=str[j]){
        return false;
    }
    else{
        // recursive call
      return   checkpalindrome(str,i+1,j-1);
    }
}

int main(){
    string name="abba";
    cout<<endl;
 /*reverse(name,0,name.length()-1);
 cout<<endl;
cout<<name<<endl;
*/
bool ans=checkpalindrome(name,0,name.length()-1);
if(ans)
cout<<"palindrome";
else{
cout<<"not palindrome";
}
return 0;
}