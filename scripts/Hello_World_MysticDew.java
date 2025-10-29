// LANGUAGE: JAVA
// ENVIRONMENT: JAVA JDK 11
// AUTHOR: Mystic Dew
// GITHUB: https://github.com/MysticDew

public class Hello_World_MysticDew {

    public static void main(String[] args) {
        String RESET = "\u001B[0m";
        String RED = "\u001B[31m";
        String YELLOW = "\u001B[33m";
        String PURPLE = "\u001B[35m";
        String CYAN = "\u001B[36m";
        System.out.println(CYAN + "Hello " + RED + "World " + YELLOW + "in "+ PURPLE + "Color!" + RESET);

    }
}