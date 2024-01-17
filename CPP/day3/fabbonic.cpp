#include<iostream>
using namespace std;
int main(){
    int n ,i;
    int a=0,b=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    for(i=0;i<n;i++){
        if(i==0){
            cout<<a<<" ";
        }
        else if(i==1){
            cout<<b<<" ";
        }
        else{
           int next_no=a+b;
        cout<<next_no<<" ";
        a=b;
        b=next_no; 
        }
        
    }
}