#include<stdio.h>
int main(){
    // char name[30];
    // // char name[30]="jenny";
    // // char name[30]={'j','e','n','n','y','\0'};
    // printf("enter the name ");
    // scanf("%s",name);
    //     scanf("%5s",name);
    // printf("%s",name);


//     char fname[30],lname[30];
//     printf("enter the name ");
//     scanf("%s %s",fname,lname);
//     printf("%s %s",fname,lname);

 char name[30];
//  printf("enter the name");
//  gets(name);
//  printf("%s",name);
//  puts(name);
//  puts(name);
//  puts(name);
//  printf("%.5s\n",name);
//  printf("%10.5s",name);

gets(name);
printf("%s\n",&name[2]);
//  puts function already include\n
//  there is a problem with gets of buffer problem ,untill enter it will try to read complete sentence without checking size 

 }