/** 
* LANGUAGE: Java
* AUTHOR: Cody Siegmann
* GITHUB: https://github.com/codysieg
**/

public class HelloWorldSiegmann {
    public static void main(String[] args) {
        printHelloWorld();
    }

    public static void printHelloWorld() {
        char[] printedArray = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D'};
        for(int i = 0; i < printedArray.length; i++) {
            System.out.print(printedArray[i]);
        }
        System.out.println();
    }
}