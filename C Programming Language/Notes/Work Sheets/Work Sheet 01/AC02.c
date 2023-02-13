#include <stdio.h>

// Write a C program to check whether a number is negative, positive or zero. //

int main()

{
    int number;

    printf("ENTER YOUR NUMBER");

    scanf("%d",&number);

    if(number==0)
    {
        printf("You Enterd Zero Value");
    }
    else if(number>0)
    {
        printf("You Enterd Positive number\n");

        printf("You Enterd %d",number);
    }
    else
    {
        printf("You Enterd Negative number\n");

        printf("You Enterd %d",number);
    }

}
