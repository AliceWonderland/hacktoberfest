// LANGUAGE: Java
// AUTHOR: Gleb Ermolaev
// GITHUB: https://github.com/Ermolaeff
//
//This script takes the name of the user as an input
//and greets him after that.


import java.util.Scanner;

public class Hello_World {
    public static void main(String args[]) {
       Scanner scanner = new Scanner(System.in);
       String name = scanner.nextLine();

       System.out.println("Hello, " + name);
    }
}
