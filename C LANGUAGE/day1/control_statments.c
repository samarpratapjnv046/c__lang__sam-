#include<stdio.h>
#include<conio.h>
// void main(){
//     int a;
//     printf("enter a integer \n");
//     scanf("%d",&a);
//     if (a)
//     {
//      printf("inside if block");   
//      printf("\ninside if block 4 ");
//     }
// printf("\n outside the if block");
// getch();
// }

void main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if (age>25 && age<30){
        printf("age :%d",age);
        printf("coffee with me");
    }
    else {
        printf("age:%d", age);
        printf("\ngo to home");
        getch();
    }

}