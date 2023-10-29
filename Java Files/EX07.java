import java.util.Scanner;

import org.graalvm.compiler.asm.amd64.AMD64Address.Scale;

//Write a Java program to enter a number and print its reverse.

public class EX07 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter Intiger : ");

        int number = input.nextInt();

        int num_array[] = new  int[number];

        //num_array[] = number;

        System.out.print(num_array[1]);


    }
    
}
