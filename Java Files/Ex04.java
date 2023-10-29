//Write a JAVA program to calculate sum of digits of a number.

import java.util.Scanner;;

public class Ex04 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter Size Of Array : ");

        int size = input.nextInt();
        
        int number[];
        
        number= new int[size];

        System.out.print("Enter Number : ");

        number = input.nextInt();

        /*for(int i = 0;i <= number.length;i++)
        {
            System.out.println(number[i]);
        }*/
    }
    
}
