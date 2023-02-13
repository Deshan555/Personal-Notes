#include <stdio.h>

// Write a C program to check whether a number is even or odd using switch case//

int main()
{
    int num1,x;

    printf("Enter Number=");

    scanf("%d",&num1);

    x=num1%2;

    switch(x==0)
    {
    case 1:

        printf("%d IS EVEN NUMBER",num1);

        break;

    case 0:

        printf("%d IS ODD NUMBER",num1);

        break;

    }

    return 0;
}
