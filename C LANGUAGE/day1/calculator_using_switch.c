#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,operation,sum,subs, multi,devision ;
    printf(" enter 1 for addition: \n enter 2 for substraction\n enter 3 for multipli. \n enter 4 for devision\n");
    scanf("%d",&operation);
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    switch(operation)
    {
        case 1:
            sum=a+b;
            printf("sum = %d",sum);
            break;
        case 2:
            subs=a-b;
            printf("subs=%d",subs);
            break;
        case 3:
            multi=a*b;
            printf("multi=%d",multi);
            break;
        case 4:
            devision=a/b;
            printf("devision=%d",devision);
            break;
    }
    printf("\nend of program");
}