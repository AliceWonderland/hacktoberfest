import java.util.Scanner;

public class Factorial {

    // Method to calculate factorial using a loop
    public static long factorial(int n) {
        long result = 1;

        // Iterative approach to calculate factorial
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check for negative numbers
        if (number < 0) {
            System.out.println("Factorial is not defined for negative numbers.");
        } else {
            // Calculate factorial and display the result
            long result = factorial(number);
            System.out.println("Factorial of " + number + " is: " + result);
        }
    }
}