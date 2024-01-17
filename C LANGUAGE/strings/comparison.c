#include<stdio.h>
int main(){
    // using function strcmp()
   /* char s1[10]="ramad";
    char s2[10]="raman";
    int value=strcmp(s1,s2);
    printf("%d",value);*/
    // 0 for same 
    // 1 means value which first not matched is greater in s1 string.
    // -1 means value which first not matched is less in s1 string.


    // now without using strcmp()
int value,flag=0;
char s1[]="hi";
char s2[]="hello";
for(int i=0;s1[i]!='\n'||s2[i]!='\n';i++){
    if(s1[i]!=s2[i]){
        flag=1;
        break;
    }
}
if (flag==1){
    printf("not same");
}
}