#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
/*int num=5;
cout<<num<<endl;
// address of operator
cout<<"address of num is "<<&num<<endl;
int *ptr=&num;
cout<<"value is :"<<*ptr<<endl;
cout<<"value is :"<<ptr<<endl;
 double d=4.3;
 double *p=&d;
 cout<<"value is :"<<*p<<endl;
cout<<"value is :"<<p<<endl;
cout<<"size of int is :"<<sizeof(num)<<endl;
cout<<"size of pointer  is :"<<sizeof(ptr)<<endl;
cout<<"size of pointer  is :"<<sizeof(p)<<endl;*/


// pointer to int is created and pointing to some garbage value 
// int *p;
// int *p=0;
// cout<<*p<<endl;

// two format of initialisation of pointer 
/*int i=5;
int *q=0;
q=&i;
cout<<"value is :"<<*q<<endl;
cout<<"value is :"<<q<<endl;
int i=5;
int *q=&i;
cout<<"value is :"<<*q<<endl;
cout<<"value is :"<<q<<endl;*/
 int num=5;
 int *p=&num;
 cout<<"before"<<num<<endl;
 (*p)++;
cout<<"after"<<num<<endl;
// copying a pointer 
int *q=p;
cout<<p<<" "<<q<<endl;
cout<<*p<<" "<<*q<<endl;
*p=*p+1;
cout<<*p<<endl;
cout<<p<<endl;
p=p+1;
cout<<p<<endl;
return 0;
}