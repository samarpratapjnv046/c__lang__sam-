#include<iostream>
using namespace std;
/*void func(int a ,int b){
    a++;
    b++;
    cout<<a<<b<<endl;
}
*/ 

int getmax(int &a,int &b){
    return(a>b)?a:b;
}
int main(){
int a=1,b=2;
// func(a,b);
int ans =0;
if(a>b){
    ans=a;
}
else{
    ans=b;
}
// another way using tertiary form for if and else
ans=(a>b)?a:b;
a=a+3;
b=b+2;
ans=(a>b)?a:b;


// function call replace by function body 













return 0;

}