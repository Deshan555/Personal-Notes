#include <stdio.h>

//Write a C program to find maximum between two numbers//

int main()

{
    float a,b;

    printf("Enter Two Numbers:");

    scanf("%f%f",&a,&b);

    if(a==b)
    {
        printf("%f %f :These Two Numbers Are Same");
    }
    else if(a>b)
    {
        printf("%f is Higher than %f .%f is Maximum",a,b,a);
    }
    else
    {
         printf("%f is Higher than %f .%f is Maximum",b,a,b);
    }

    return 0;
        
}

