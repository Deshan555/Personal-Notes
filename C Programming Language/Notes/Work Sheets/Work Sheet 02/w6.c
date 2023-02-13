#include <stdio.h>
//Write a C program to check whether a number is positive, negative or zero using switch case//
int main()
{
    int num;

    printf("Enter Number=");

    scanf("%d",&num);

    switch(num > 0)
    {
    case 1:
        printf("%d is POSITIVE NUMBER",num);

        break;

    case 0:

        switch(num==0)
        {
        case 1:

            printf("%d IS ZERO",num);

            break;

        case 0:

            printf("%d IS NEGATIVE NUMBER",num);

            break;
        }
    }

    return 0;
}
