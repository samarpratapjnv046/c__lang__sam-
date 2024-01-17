#include<stdio.h>
#include<string.h>
int main(){
char s1[30]="rameshwar";
/*strrev(s1);
printf("%s",s1);*/

// without using functin
int len=strlen(s1);
int j;
for(int i=0,j=len-1;i<j;i++,j--){
   char c=s1[i];
   s1[i]=s1[j];
   s1[j]=c;

}
printf("%s",s1);
}
