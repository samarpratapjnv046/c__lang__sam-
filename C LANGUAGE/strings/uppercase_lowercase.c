#include<stdio.h>
#include<string.h>
int main(){
    // by using the function
    char s1[]="jayanti";
    char s2[]="KHATRI";
    /*strlwr(s2);
    strupr(s1);
    printf("%s\n",s1);
    printf("%s\n",s2);*/

    // now without using function
    // function for lower case
for(int i=0;s2[i]!='\0';i++){
if(s2[i]>=65 && s2[i]<=90){
    s2[i]=s2[i]+32;
}
}
printf("%s",s2);
}