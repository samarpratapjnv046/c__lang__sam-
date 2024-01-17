#include<iostream>
using namespace std;
int factorial(int n){
    // base  case 
    if(n==0)
        return 1;
    
    int chhoti=factorial(n-1);
    int badi=n*chhoti;
       return badi ;
    //    if there is no base case then it give segmentation fault;
    }

// two to the power 

int power(int n){
    if(n==0)
    return 1;
    int smaller=power(n-1);
    int bigger = 2*smaller;
    return bigger;
}
void print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    print(n-1);
}
void print1(int n){
    if(n==0){
        return ;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){
int n;
cin>>n;
int ans=factorial(n);
int ans1=power(n);
cout<<"factorial of n is:"<<ans<<endl;
cout<<"value of 2^n is:"<<ans1<<endl;
print(n);
return 0;
}