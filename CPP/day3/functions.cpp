#include<iostream>
using namespace std;
/*int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    // cout<<ans<<endl;
    return ans;
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    c=power(a,b);
    cout<<c<<endl;

}*/

// function to find the even numbers
/*bool iseven(int n){
    if(n%2==0){
        return 1;
    }
    else
    return 0;
}
int main(){
    int n,c;
cout<<"enter the value of n"<<endl;
cin>>n;
c=iseven(n);{
    if(iseven){
        cout<<"it is a even number"<<endl;
    }
    else
    cout<<"it is a odd number"<<endl;
}

}*/

// ncr function
/*int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    if(n<r){
        cout<<"chutiya h kya launde"<<endl;
    }
    else{
    int num=factorial(n);
    int denom=factorial(n-r)*factorial(r);
    return num/denom;}
}
 int main(){
    int n,r,ans;
    cout<<"enter the valuye of n"<<endl;
cin>>n;
cout<<"enter the valuye of r"<<endl;
cin>>r;
ans=ncr(n,r);
cout<<ans<<endl;
 }*/

//  counting program

/*void counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    cout<<endl;
}
    int main(){
        int n;
        cout<<"ente the value of n"<<endl;
        cin>>n;
        counting(n);
    }*/

// prime number program
/*bool isprime(int n){
    if(n<=0){
        cout<<"not prime "<<endl;
    }
    else{
     for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
     }
        return 1;
    }
}
int main(){
    int n;
    cout<<"enter tha value of n"<<endl;
    cin>>n;
    if(isprime(n)==1){
        cout<<" prime number"<<endl;
    }
    else{
    cout<<"not prime number"<<endl;
    }
    return 0;
}*/

// pass by value
/*void dummy(int n){
    n++;
    cout<<"n is:"<< n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"number n is:"<<n<<endl;
    return 0;
}*/

