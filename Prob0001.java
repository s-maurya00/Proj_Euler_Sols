import java.util.Scanner;

class Prob0001
{
    public static void main(String[] args) {
        int num = 0;
        int addn = 0;
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter range(n):\t");
        num = sc.nextInt();
        
        // Prob1 pr1 = new Prob1(); 
        for(int i = 0; i < num; i++)
        {
            if(i % 3 == 0 | i % 5 == 0)
            {
                addn += i;
            }
        }
        System.out.println("Output is:" + addn);
        sc.close();
    }
}