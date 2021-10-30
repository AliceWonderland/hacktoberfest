// LANGUAGE: Java
// ENV: Java
// AUTHOR: @vergieet
// GITHUB: https://github.com/vergieet

import java.util.*;

public class UselessLoopHelloWorld{

     public static void main(String []args){
        Arrays.asList("H","e","l","l","o"," ","W","o","r","l","d","!")
            .stream()
            .forEach(System.out::print);
     }
}
