#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="jenny ";
    char s2[7]="khatri";
    // s1 is destination and s2 is source
/*strcat(s1,s2);
printf("%s",s1);*/

// without using strcat() function
int l1=strlen(s1);
int l2=strlen(s2);
for(int i=0;i<=l2;i++){
s1[l1+i]=s2[i];
}
printf("%s\n",s1);
}