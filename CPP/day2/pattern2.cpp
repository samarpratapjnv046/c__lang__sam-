#include<iostream>
using namespace std;
int main(){
    // type 1 pattern
/*int n,space; 
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 2 pattern
/*int n; 
cout<<"enter the value of n"<<endl;
cin>>n;
// 
for(int i=0;i<=n;i++){
    for(int j=i;j<=n;j++){
        cout<<"*";
    }
    for(int j=1;j<=i-1;j++){
        cout<<" ";
    }
    cout<<endl;
}*/
// type 3 pattern
/*int n,space; 
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    space=i-1;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/
// type 5 pattern
/*int n,space; 
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    space=i-1;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    int a=i;
    while(j<=n-i+1){
        cout<<a;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/
// type 6 pattern
/*int n,space; 
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    int a=i;
    while(j<=i){
        cout<<a;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 7 pattern
int n,space; 
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    space=i-1;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    int a=i+j-1;
    while(j<=i){
        cout<<a;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

}