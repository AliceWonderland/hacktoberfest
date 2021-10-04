//Language: Java
//Author: Debalina
//Github: https://github.com/lina309

public class HelloWorld {
    public static void main(String[] args) {
        String s="";
        int i[]={72,101,108,108,111,32,87,111,114,108,100,33};
        for (int x : i) {
            s= s + (char)(x);    
        }
        System.out.println(s);
    }
}
