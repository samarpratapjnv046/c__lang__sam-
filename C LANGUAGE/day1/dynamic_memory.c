#include<stdio.h>
#include<stdlib.h>
 int main(){
    int *ptr,n,i;
    printf("enter total numbers of values\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("the entered values are\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
 }