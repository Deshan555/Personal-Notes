#include <stdio.h>

//Write a C program to input any alphabet and check whether it is vowel or consonant//

int main()

{
    char i;

    printf("INPUT A CARACTER:");

    scanf("%c",&i);

    if((i>='a' && i<='z') || (i>='A' && i<='Z'))//identify input charater is valid or invalid//
    {
        printf(" '%c' IS VALID CAHARACTER\n",i);
    }
    else
    {
        printf(" '%c' IS INVALID CHARACTER\n",i);

        return 0;
    }
    if(i=='a')
    {
        printf("IT IS a voval");
    }
    else if(i=='A')
    {
        printf("IT IS a voval");
    }
    else if(i=='e')
    {
        printf("IT IS a voval");
    }
    else if(i=='E')
    {
        printf("IT IS a voval");
    }
    else if (i=='i')
    {
        printf("IT IS a voval");
    }
    else if(i=='L')
    {
        printf("IT IS a voval");
    }
    else if(i=='o')
    {
        printf("IT IS a voval");
    }
    else if(i=='O')
    {
        printf("IT IS a voval");
    }
    else if(i=='u')
    {
        printf("IT IS a voval");
    }
    else if(i=='U')
    {
        printf("IT IS a voval");
    }
    else
    {
        printf("You Enterd consonant Character\n ");
    }









}
