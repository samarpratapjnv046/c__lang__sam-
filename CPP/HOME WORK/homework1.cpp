#include<iostream>
using namespace std;
int main(){
    int n,d,a;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value of d"<<endl;
    cin>>d;
    cout<<"enter the value of a"<<endl;
     cin>>a;
    int nth_term=a+(n-1)*d;
    cout<<n<<"th term is: "<<nth_term<<endl;
}