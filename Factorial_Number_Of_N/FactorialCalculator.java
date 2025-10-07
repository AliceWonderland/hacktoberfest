import java.util.Scanner;

public class FactorialCalculator {

    public static long findFactorial(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * findFactorial(n - 1);
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("FACTORIAL FINDER");
        System.out.print("Enter a number: ");
        
        int num = input.nextInt();
        
        if (num < 0) {
            System.out.println("Cannot find factorial of negative number!");
        } else {
            long answer = findFactorial(num);
            System.out.println(num + "! = " + answer);
        }
        
        input.close();
    }
}