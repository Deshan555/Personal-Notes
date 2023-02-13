#include <stdio.h>

//Write a C program to input week number and print week day//

int main()

{
    int x;

    printf("Enter Your Number:");

    scanf("%d",&x);

    if(x==1)
    {
        printf("Monday");
    }
    else if(x==2)
    {
        printf("Tuesday");
    }
    else if(x==3)
    {
        printf("WednesDay");
    }
    else if(x==4)
    {
        printf("ThersDay");
    }
    else if(x==5)
    {
        printf("FriDay");
    }
    else if(x==6)
    {
        printf("SaterDay");
    }
    else if(x==7)
    {
        printf("SunDay");
    }
    else
    {
        printf("You Enterd invalid number");
    }

    return 0;

}





