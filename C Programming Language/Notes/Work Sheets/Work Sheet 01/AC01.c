#include <stdio.h>

// Write a C program to check whether a number is even or odd.//

int main()
{
    int number;

    int a;

    printf("ENTER NUMBER:");

    scanf("%d",&number);

    a=number%2;

    if(a==0)
    {
        printf("YOU ENTERED EVEN NUMBER YOUR NUMBER IS %d",number);
    }
    else
    {
        printf("YOU ENTERD ODD NUMBER YOUR NUMBER IS %d",number);
    }

    return 0;





}
