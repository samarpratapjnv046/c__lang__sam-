#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    printf("enter the strings:\n ");
    gets(s);
    printf("%s\n",s);
    /*int len=strlen(s);
    printf("%d",len);*/

    // length without using the strlen function
    /*int count=0;
    int i;
    while(s[i]!='\n'){
        count++;
        i++;
    }
    printf("\n%d",count);*/
    
}