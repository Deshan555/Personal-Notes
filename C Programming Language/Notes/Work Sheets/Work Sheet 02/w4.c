#include <stdio.h>

// Write a C program to find maximum between two numbers using switch case //

int main()

{
    int num1,num2,x;

    printf("Enter Number 1=");

    scanf("%d",&num1);

    printf("Enter Number 2=");

    scanf("%d",&num2);

    switch(num1>num2)
    {
    case 1:

        printf("%d Is Maximum Number\n",num1);

        printf("%d Is Minimum Number\n",num2);

        break;

    case 0:

        printf("%d Is Maximum Number\n",num2);

        printf("%d Is Minimum Number\n",num1);

        break;
    }

    return 0;


}
