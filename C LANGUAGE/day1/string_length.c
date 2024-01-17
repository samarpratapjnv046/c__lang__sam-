#include<stdio.h>
#include<string.h>
int main(){
    // char name[30];
    // int count=0, i=0;
    // printf("enter the name");
    // gets(name);
    // // count=strlen(name);
    // // printf("string length is %d",count);
    // while(name[i]!='\0'){
    //     count++;
    //     i++;
    // }
    // printf("string length is %d",count);

    // concatenate two strings 
    // char s1[30]="samar";
    // char s2[6]="yadav";
    // strcat(s1,s2);
    // printf("string after catenation is %s \n",s1);

    // NOW WITHOUT USING STRCAT FUNCTION CONCATINATE THE TWO  STRINGS 
    // int len1,len2,i;
    // char s1[30]="jayanti";
    // char s2[7]="khatri";
    // len1=strlen(s1);
    // len2=strlen(s2);
    // for(i=0;i<=len2;i++)
    // {
    //     s1[len1+i]=s2[i];
    // }
    // printf("string after catenation is %s\n",s1);
    // puts(s2);

    // int value=0;
    // char s1[30];
    // char s2[30];
    // printf("enter the s1");
    // gets(s1);
    // printf("enter the s2");
    // gets(s2);
    // value=strcmp(s1,s2);
    // if(value==0)
    // printf("same");
    // else
    // printf("not same");

    // NOW WITHOUT USING FUNCTION
    int value=0;
    char s1[30];
    char s2[30];
    printf("enter the s1");
    gets(s1);
    printf("enter the s2");
    gets(s2);
    int flag=0,i;
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;

        }
    }
    if(flag==0)
    printf("same");
    else
    printf("not same");




}