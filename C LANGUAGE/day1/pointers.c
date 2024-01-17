#include<stdio.h>
void main(){
// int a=10,b=5;
// int *p,*q;
// p=&a;
// q=&b;
// q=&b;
// *q=*p;
// printf("a=%d %d %d",a,*p,*q);


// int a=10;
// int *p=&a;
// int **q=&p;
// printf("a= %d\n",a);
// printf("a= %d\n",*p);
// printf("a= %d\n",*(*q));
// printf("adress of p= %x %x\n",&p,q);


// int a[5]={1,2,3,4,5};
// int *p=&a[0];
// printf("value is %d\n ",*p);
// printf("adsress of element is:%u\n",p);
// p=p+2;
// printf("value is %d\n ",*p);
// printf("adsress of element is:%u\n",p);
// // we can not DD TWO POINTER VARIABLE 


int a[]={1,2,3,6,5};
int *p=a;
int *q=&a[3];
printf("q-p %d\n",q-p);
printf("p-q %d\n",p-q);
q=q-2;
printf("value of q=%d\n",*q);
p=p+2;
printf("q-p= %d\n",q-p);
}