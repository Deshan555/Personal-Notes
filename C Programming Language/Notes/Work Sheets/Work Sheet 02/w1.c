#include <stdio.h>
//Write a C program to print day of week name using switch case.//

int main()
{
    int w;

    printf("Enter Number 1-7=");

    scanf("%d",&w);

    switch(w)
    {
    case 1:
        printf("Sunday");
        break;

     case 2:
        printf("Monday");
        break;

     case 3:
        printf("Tuesday");
        break;

     case 4:
        printf("Wednesday");
        break;

     case 5:
        printf("Thursday");
        break;

     case 6:
        printf("Friday");
        break;

     case 7:
        printf("Saturday");
        break;

     default:
        printf("You Enterd Wrong Number");
        break;
    }
    return 0;


}
