import java.util.Scanner;

public class BinaryToDecimal {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input binary number from the user
        System.out.print("Enter a binary number: ");
        String binary = scanner.nextLine();

        // Convert binary to decimal using built-in method
        int decimal = Integer.parseInt(binary, 2);

        // Print the decimal equivalent
        System.out.println("Decimal equivalent: " + decimal);

        scanner.close();
    }
}
