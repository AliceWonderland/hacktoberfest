import java.util.Scanner;

  //LANGUAGE: JAVA
  //AUTHOR: Thuvaragan
 

class Main {
    public static void main(String[] args) {

        // Creates an object of Scanner
        Scanner input = new Scanner(System.in);

        System.out.print("Enter your name: ");

        // Takes input from the keyboard
        String name = input.nextLine();

        // Prints name
        System.out.println("Hellow World " + name);

        // Closes the scanner
        input.close();
    }
}