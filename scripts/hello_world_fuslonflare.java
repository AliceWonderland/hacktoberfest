// LANGUAGE: Java
// ENV: Java virtual machine (JVM)
// AUTHOR: Phuwarin Janaporn
// GITHUB: https://github.com/fuslonflare

import java.util.*;

public class Welcome {
    public static void main(String[] args) {
        log("Hello World!")
    }

    private static log(Object message) {
        String text = String.valueOf(message);
        System.out.println(text);
    }
}