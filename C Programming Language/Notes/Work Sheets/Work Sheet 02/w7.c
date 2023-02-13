#include <stdio.h>


int main()

{
    int num1,num2,ans;

    char op;

    printf("ENTER OPERATOR YOU WISH TO PROCESS + - / * %:");

    scanf("%c",&op);

    printf("ENTER FIRST NUMBER=");

    scanf("%d",&num1);

    printf("ENTER SECOND NUMBER=");

    scanf("%d",&num2);

    switch(op)//Switch Oparetion//
    {
    case '+':

        ans=num1+num2;

        printf("%d + %d is:%d",num1,num2,ans);

        break;

    case '-':

        ans=num1-num2;

        printf("%d - %d is:%d",num1,num2,ans);

        break;

    case '/':

        ans=num1+num2;

        printf("%d / %d is:%d",num1,num2,ans);

        break;

    case '*':

        ans=num1*num2;

        printf("%d * %d is:%d",num1,num2,ans);

        break;

    }

    return 0;
}
