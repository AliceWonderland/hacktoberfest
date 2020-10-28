// Java program program to  
// check for even or odd 
  
class EvenOdd
{ 
    // Returns true if n is even, else odd 
    public static boolean isEven(int n) 
    { 
        return (n % 2 == 0); 
    } 
      
    // Driver code 
    public static void main(String[] args) 
    { 
        int n = 101; 
        if(isEven(n) == true) 
            System.out.print("Even"); 
        else
            System.out.print("Odd"); 
    } 
} 