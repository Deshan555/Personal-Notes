#include <stdio.h>

//Write a C program to input any character and check whether it is alphabet, digit or special character.//

// using ascii value //

int main()

{
    char i;

    printf("Enter Character:");

    scanf("%c",&i);

    if ((i>=97 && i<=122) || (i>=65 && i<=90))
    {
        printf(" '%c' this Character Is In Alphabet",i);
    }
    else if( i >=48  && i <=57 )
    {
        printf(" '%c' is a digit",i);
    }
    else
    {
        printf(" '%c' this is a Special Character",i);
    }

    return 0;
}
