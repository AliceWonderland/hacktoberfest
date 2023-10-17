// LANGUAGE: Java
// ENV: JRE(Windows)
// AUTHOR: Vansh Garg
// GITHUB: https://github.com/VanshGarg06

import java.util.*;

public class hello_world_VanshGarg06 {

	public static void main(String[] args) {
		System.out.println("Hello, World!");
        // Palindrome Number
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int number = num;
        int reverse = 0;
        while(number>0){
            int rem = number%10;
            reverse = reverse*10 + rem;
            number /= 10;
        }
        if(num==reverse){
            System.out.println("The number entered "+num+" is a palindrome number");
        }
        else{
            System.out.println("Sorry! The number entered "+num+" is not a palindrome number");
        }

	}

}
