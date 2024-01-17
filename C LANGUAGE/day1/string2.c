#include<stdio.h>
//  string is array of character 
// #include<stdio.h>
// void main(){
//     char stringname[15];
//     // string ended with null charecter
// printf("enter the string\n");
// scanf("%s",stringname);
// printf("%s",stringname);

// }
// void main(){
//     char a[]={'s','d','f'}; 
//     printf("%s",a);
// }

// scanf is unable to read the space so we use gets
// #include<stdio.h>
// void main(){
//     char name[30];
//     printf("enter the name\n");
//     gets(name);
//     printf("%s",name);

// }

// #include<stdio.h>
// void main(){
//     char name[25];
//     scanf("%s",name);
//     // scanf("%4s",name);
//     // printf("%s",name);
//     // printf("%4s",name);
//     // printf("%.5s",name);
//     printf("%10.5s",name);
// }

// use of puts()
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char name[30];
//     int count=0;
//     printf("enter the name");
//     gets(name);
//     count=strlen(name);
//     printf("string length is %d",count);
// }

// #include<stdio.h>
// #include<string.h>
// void main(){
//     int count=0,i;
//     char name[30];
//     printf("enter the name\n");
//     gets(name);
//     while(name[i]!='\0')
// {
//     count++;
//     i++;
// }
// printf("the length of the string is %d",count);
// }

//  program for catenation of two strings 

// #include<stdio.h>
// #include<string.h>
// void main(){
//     // using strcat(s1,s2)   where s1 is destination and s2 is source.
//     char s1[30]="jenny";
//     char s2[8]=" khatri";
//     int len1,len2,i;
//     len1=strlen(s1);
//     len2=strlen(s2);
//     for(i=0;i<=len2;i++){
//         s1[len1+i]=s2[i];
//     }
//     printf("%s",s1);

// }
// #include<stdio.h>
// #include<string.h>
// void main (){
//     // using strcmp we can compare the two strings 
//     int value;
//     char s1[]="hello";
//     char s2[]="jayanti";
//     value=strcmp(s1,s2);
//     if(value==0){
//         printf("same");
//     }
//     else
//         printf("not same");
// }

// #include<stdio.h>
// #include<string.h>
// void main(){
//     int value,flag=0,i;
//     char s1[]="hello";
//     char s2[]="samar";
// for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
// if(s1[i]!=s2[i]){
//     flag=1;
//     break;
// }
// }
// if(flag==1){
//     printf("both string is not same.");
// }
// else
//     printf("both string is same.");
// }

// c program to reverse the strings
#include<stdio.h>
#include<string.h>
void main(){
    char ch;
    char s1[30]="jayanti";
    
}