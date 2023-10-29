import java.util.Scanner;
public class Ex01 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter Number : ");

        int num = input.nextInt();

        System.out.print("Enter Range : 0 - ");

        int range = input.nextInt();

        calculation(num,range);


    }

    public static void calculation(int num , int range)
    {
        for (int i = 0; i <= range ;i++)
        {
            System.out.println(num +"x"+ i +"="+num*i);
        }

    }
    
}
