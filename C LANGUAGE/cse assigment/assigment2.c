#include<stdio.h>
/*int main(){
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d,%d",a,b);
}*/

// 
// int main(){
//     // swap two numbe without using third variable
//     int a,b;
//     printf("enter the value of a and b\n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     a=b;
    
// }

int main(){
    // int prime=0;
    int composite=0,i,j,n,m;
    printf("enter the upper limit and lower limit\n");
    scanf("%d",&n);
     scanf("%d",&m);
     for(i=m;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                composite=composite+1;
            }
            else
            break;

        }
     }
// printf("%d",prime);
printf("%d",composite);
return 0;

 /*int i,j,n,m;
    printf("enter the upper limit and lower limit\n");
    scanf("%d",&n);
     scanf("%d",&m);
     for(i=m;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                if(i==j){
                    printf("%d \n",i);

                }
                 else
                 break;  
            }
           
        }
     }*/

}