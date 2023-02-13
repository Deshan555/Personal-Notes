#include <stdio.h>

//Write a C program to check whether a character is uppercase or lowercase alphabet//

int main()

{
    char character;

    printf("Enter Character:");

    scanf("%c",&character);

    if((character>='A'&& character<='Z')||(character>='a'&&character<='z'))
    {
        printf("You Enterd Valuble Character\n");
    }
    else
    {
        printf("Character You Enter Is not Valueble");

        return 0;
    }
    if((character>='A'&&character<='Z'))
    {
        printf(" '%c' is Uppercase Character\n",character);
    }
    else
    {
        printf(" '%c' is Lowercase Character\n",character);
    }
    return 0;
}
