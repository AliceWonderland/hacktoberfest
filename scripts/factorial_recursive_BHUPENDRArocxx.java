// LANGUAGE: Java
// ENV: JDK
// AUTHOR: BHUPENDRArocxx
// GITHUB: https://github.com/BHUPENDRArocxx

class Factorial {
    public static long calculateFactorial(int n) {
        if (n < 0) {
            return -1; // Factorial not defined for negative numbers
        }
        // Base case: factorial of 0 or 1 is 1
        if (n == 0 || n == 1) {
            return 1;
        }
        // Recursive step
        return n * calculateFactorial(n - 1);
    }

    public static void main(String[] args) {
        int number = 5;
        long result = calculateFactorial(number);

        if (result != -1) {
            System.out.println("Factorial of " + number + " is: " + result);
        } else {
            System.out.println("Invalid input.");
        }
    }
}