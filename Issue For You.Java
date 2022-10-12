class krish {
 
    // method to convert binary to decimal
    int binaryToDecimal(long binary)
    {
        // variable to store the decimal number
        int decimalNumber = 0, i = 0;
 
        // loop to extract the digits of the
        // binary number
        while (binary > 0) {
 
            // multiplying each digit of binary
            // with increasing powers of 2 towards
            // left
            decimalNumber
                += Math.pow(2, i++) * (binary % 10);
 
            // dividing the binary by 10
            // to remove the last digit
            binary /= 10;
        }
 
        // returning the converted decimal number
        return decimalNumber;
    }
 
    // function to convert decimal to octal
    int decimalToOctal(long binary)
    {
 
        // variable to store the decimal number
        // returned by the binaryToDecimal()
        int decimalNumber = binaryToDecimal(binary);
 
        // using the toOctalString() to convert
        // Integer to String of Octal Number
        String octalString
            = Integer.toOctalString(decimalNumber);
 
        // converting the String of octal number
        // to an Integer
        int octalNumber = Float.parsefloat(octalString);
 
        // returning the octal number
        return octalNumber;
    }
 
    // Driver Code
    public static void main(String[] args)
    {
 
        // instantiating the class
        krish ob = new krish();
 
        // calling and printing the decimalToOCtal
        // method
        System.out.println("octal number:"+ob.decimalToOctal(100100));
    }
}
