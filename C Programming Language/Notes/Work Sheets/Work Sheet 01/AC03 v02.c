#include <stdio.h>

// Write a C program to find maximum between three numbers//

int main()

{
    int a,b,c,max;

    printf("Enter Number:");

    scanf("%d%d%d",&a,&b,&c);

    max=a;

    if(max<b)
    {
        max=b;

    }
    if (max<c)
    {
        max=c;
    }
    printf("Maximum Number is = %d",max);

    return 0;


}
