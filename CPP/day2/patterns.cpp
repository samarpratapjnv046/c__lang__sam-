#include<iostream>
using namespace std;
int main(){
    //  PROGRAM FOR SUM OF N NUMBERS
  /*  int sum=0, i=1,n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        cout<<i<<endl;
        i=i+1;
    }
cout<<"the sum is"<<sum<<endl;*/

//sum of even numbers
 /*int sum=0, i=2,n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        cout<<i<<endl;
        i=i+2;
    }
cout<<"the sum is"<<sum<<endl;*/

// find the prime number
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"not prime for"<<i<<endl;
    }
    else
    cout<<"it is a prime number for"<<i<<endl;
    i=i+1;
}*/

// first type patterns 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
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
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<i<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// TYPE THREE PATTERNS
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 4 pattern 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 5 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

//  type 6 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<"*"<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 7 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// TYPE 8  PATTERN 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 9 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// type 10 pattern 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+i-1;
        cout<<ch<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/

// TYPE 11 PATTERN 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch = 'A'+j-1;
        cout<<ch<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/
// type 12 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch = 'A'+j+i-2;
        cout<<ch<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/
// type 13 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
char ch =65;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<ch<<" ";
        ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/
// type 14 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
char ch =('A'+i-1);
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<ch<<" ";
        // ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    ch=ch+1;
    i=i+1;
}*/
// type15 pattern
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
char ch =('A'+i-1);
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<ch<<" ";
        ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    // ch=ch+1;
    i=i+1;
}*/
// type 16 pattern 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    char ch =('A'+j+i-2);
    while(j<=i){
        cout<<ch<<" ";
        ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    // ch=ch+1;
    i=i+1;
}*/
// type 17 pattern 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    char ch =('A'+n-i);
    while(j<=i){
        cout<<ch<<" ";
        ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    // ch=ch+1;
    i=i+1;
}*/
// type 18 pattern 
/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
char ch ='A';
while(i<=n){
    int j=1;
    // char ch ='A';
    while(j<=n){
        cout<<ch<<" ";
        ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    // ch=ch+1;
    i=i+1;
}*/
// star type pattern
int n,space; 
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
}

}