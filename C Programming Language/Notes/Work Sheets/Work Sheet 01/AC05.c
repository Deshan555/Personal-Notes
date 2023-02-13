#include <stdio.h>

//Write a C program to input electricity unit charges and calculate total electricity bill according to the//
//given condition://
//For first 50 units Rs. 0.50/unit//
//For next 100 units Rs. 0.75/unit//
//For next 100 units Rs. 1.20/unit//
//For unit above 250 Rs. 1.50/unit//
int main()
{
   float unit,charge,exu;

   printf("Enter Number Of Units:");

   scanf("%f",&unit);

   if(unit==50)
   {
       charge= unit*0.50;

       printf("We Charge R.S:%f For %f Units",charge,unit);
   }
   else if(unit<=150)
   {
       exu=unit-50;

       charge=((exu*0.75)+(50*0.50));

       printf("We Charge R.S:%f For %f Units",charge,unit);
   }
   else if(unit<=250)
   {
       exu=unit-150;

       charge=((exu*1.20)+(100*0.75)+(50*0.50));

       printf("We Charge R.S:%f For %f Units",charge,unit);
   }
   else if(unit>1.50)
   {
       exu=unit-250;

       charge=((exu*1.50)+(100*1.25)+(100*0.75)+(50*50));

       printf("We Charge R.S:%f For %f Units",charge,unit);
   }
   return 0;
}
