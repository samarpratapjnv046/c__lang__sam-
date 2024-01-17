#include<iostream>
using namespace std;
// count primes
bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=0;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int countprime(int n){
    int cnt =0;
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<" total prime numbers are ";
    cout<<countprime(n);
    
}