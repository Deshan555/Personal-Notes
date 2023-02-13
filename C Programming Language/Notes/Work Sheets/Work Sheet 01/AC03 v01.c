#include <stdio.h>

// Write a C program to find minimum between three numbers//

int main()

{
    int a,b,c,min;

    printf("Enter Number:");

    scanf("%d%d%d",&a,&b,&c);

    min=a;

    if(min>b)
    {
        min=b;

    }
    if (min>c)
    {
        min=c;
    }
    printf("Minimum Number is = %d",min);

    return 0;


}
