#include<stdio.h>
// int main(){
//     int n,i, sum=0;
//     printf("enter the numbers of elements\n");
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         printf("enter the values\n");
//         scanf("%d",&a[i]);
//         sum=sum+a[i];
//     }
//     printf("\n sum is :%d",sum);
//     return 0;
// }

// int main(){
//     int a[2],i;
//     printf("enter the values ");
//     for(i=0;i<2;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<2;i++)
//     {
//         printf("%d\t",a[i]);

//     }

// }

// int main(){
//     int marks[5];
//     int sum=0,avg,i;
//     printf("enter the values\n ");
//     for(i=0;i<5;i++){
//         scanf("%d",&marks[i]);

//     }
//     for(i=0;i<5;i++){
//         printf("%d\n",marks[i]);
//         sum=sum+marks[i];
//     }
// printf("sum is: %d",sum);
// avg=sum/5;
// printf("\navg is :%d",avg);

// }
// void main (){
//     int a[10],i;
//     int even=0,odd=0;
//     for(i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++){
//         if(a[i]%2==0)
//         even=even+1;
//         else
//              odd=odd+1;
//     }
//     printf("\neven elements are :%d",even);
//     printf("\nodd elements are :%d",odd);
// }

// void main(){
//     int arr1[5],arr2[5],arr3[5],i;
//        printf("enter the values of first arrays ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&arr1[i]);

//     }
//     printf("enter the values of second array ");
//       for(i=0;i<5;i++)
//     {
//         scanf("%d",&arr2[i]);

//     }
//  for(i=0;i<5;i++){
//     arr3[i]=arr1[i]+arr2[i];
//     printf("\nthe arr3 element at idex %d is = %d",i,arr3[i]);
//  }

// }

// void main(){
//     int a[2][3]={1,2,3,6,5,4} ,i,j;
//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
    
// }
// program to print the transpose of a matrix
   
//    void main (){
//     int a[2][3],i,j;
//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//      for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<2;j++){
//             printf("%d\t",a[j][i]);
//         }
//          printf("\n");
//     }
//     }

// program to print the sum of individual rows and columns
// void main(){
// int a[3][3],i,j,SR,SC;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         SR=SC=0;
//         for(j=0;j<3;j++){
//             SR=SR+a[i][j];
//             SC=SC+a[i][j];
//         }
//     }
//     printf("SR=%d,SC=%d",SR,SC);
// }

