#include <stdio.h>

// Write a C program to check whether an alphabet is vowel or consonant using switch case//

int main()

{
    char x;

    printf("ENTER CHARACTER=");

    scanf("%c",&x);

    switch( x =='a' || x=='A' || x=='e' || x=='E' || x=='i'|| x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
    {
    case 1:

        printf("'%c' IS VOWEL",x);

        break;

    case 0:

        printf(" '%c' IS CONSONANT",x);

        break;

    }

    return 0;



    }

