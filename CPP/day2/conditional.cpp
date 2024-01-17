#include<iostream>
using namespace std;
int main(){
    /*int a,b;
    cout<<"enter a and b"<<'\n';
    cin>>a>>b;
    cout<<a <<endl;
     cout<<b<< endl;
     if(a>b){
        cout<<"a is greater than b"<< endl;
     }
     else
        cout<<"b is greater than a"<<endl;*/

   // cin can not read space, tab, enter
  /* int a,b;
   a= cin.get();
   b= cin.get();
   cout<<a;
   cout<<b;*/


   
   char ch;
   //  USE ASCII VALUES 
   cout<<"enter any keys"<<endl;
   cin>>ch;
   if(ch>=97 && ch<=123){
      cout<<" this is lower case"<<endl;
   }
   else if(ch>=65 && ch<=91){
      cout<<"it is upper case"<<endl;
   }
   else if(ch>=48 && ch<=57){
      cout<<"it is a neumeric value"<<endl;
   }
   else
   cout<<"other cases"<<endl;

   

}