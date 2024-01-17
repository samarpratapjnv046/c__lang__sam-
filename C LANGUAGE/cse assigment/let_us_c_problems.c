/*#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=3;i++){
    for(j=1;j<=3;j++){
        if(i!=j){
            for(k=1;k<=3;k++){
            if(k!=j && k!=i){
               printf("%d%d%d \n",i,j,k);
            }
        }
        }
}
}
}*/

/*#include<stdio.h>
int main(){
    int n=15;
    char a=1;
    for(int i=0;i<15;i++){
        for(int j=0;j<20;j++){
            printf("%c ",a);
        }
        printf("\n");
    }
}*/


// program to check that the given number can be expressed in sum of two prime numbers. 
#include<stdio.h>
void isPrime(int n) {
   int i, flag = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   return 1;
   else
   return 0;
}
int main(){
int n ;
printf("enter the value of n:\n");
scanf("%d",&n);
int a=0,b=0;
int sum=0;
for(int a=2;a<n;a++){
}