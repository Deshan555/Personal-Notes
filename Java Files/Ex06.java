// Write a JAVA program to find sum of all even numbers between 1 to n.

import java.util.Scanner;

public class Ex06 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter Range : 2 - ");

        int range = input.nextInt();

        my_method(range);
    }

    public static void my_method(int last_num)
    {
        int total = 0;

        for(int i = 0 ; i <= last_num ; i = i + 2)
        {           
            total = total + i;
        }
        
        System.out.println(total);

    }
}
