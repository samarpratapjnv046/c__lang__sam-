#include<iostream>
using namespace std;
int main(){
    int n,a,b,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    a=0;
    b=1;
    for(int i=1;i<=n;i++){
       sum=a+b;
        a=b;
        b=sum;
    }
    cout<<n<<" th fabonnaci term is: "<<sum<<endl;
}