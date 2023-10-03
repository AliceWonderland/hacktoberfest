import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
     System.out.print("Input a number: ");
     int n = in.nextInt(); 
     in.close();
     int flag = 0;
     if (n<0){
        System.out.println("invalid value ");
        System.exit(0);
     }
     if (n ==  0 || n == 1){
    flag = 1;
     }
        for (int i = 2 ; i < n/2; i++){
            if (n % i == 0){
                flag= 1;
            }          
        }
        if (flag > 0 ){
            System.out.println("  non prime ");          
        }
        else {
            System.out.println(" prime");
        }    }    
}
