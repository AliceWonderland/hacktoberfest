/*
  LANGUAGE: JAVA
  AUTHOR: SayuruRehan
  GITHUB: https://github.com/SayuruRehan
*/

import java.util.Scanner;

public class hello_world_SayuruRehan {
    public static void main(String[] args) {
        System.out.println("Hi there, what's your name?");
        
        Scanner in = new Scanner(System.in);
        String user = in.nextLine();
        
        if(user.length() > 0){
            user = user.substring(0, 1).toUpperCase() + user.substring(1, user.length());
        }
        
        System.out.println("Hello " + user + "!");
        System.out.println("Hello World!");
        System.out.println("Welcome to Programming!");
    }
}
