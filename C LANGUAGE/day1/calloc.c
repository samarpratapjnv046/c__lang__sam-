// #include<stdio.h>
// #include<stdlib.h>
//  int main(){
//     int *ptr,n,i;
//     printf("enter total numbers of values\n");
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
//     printf("enter the values\n");
//     for(i=0;i<n;i++){
//         scanf("%d",(ptr+i));
//     }
//     printf("the entered values are\n");
//     for(i=0;i<n;i++){
//         printf("%d\n",*(ptr+i));
//     }
//     free(ptr);
//  }

#include<stdio.h>
#include<stdlib.h>
 int main(){
    int *ptr,n,m,i;
    printf("enter total numbers of values\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("enter the updated m\n");
    scanf("%d",&m);
    int*ptr1=(int*)realloc(ptr,m*sizeof(int));
    printf("\nprevious adress %d,\nnew adress %d",ptr,ptr1);

    printf("\nvalues are:");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr1+i));
    }
    free(ptr1);
 }