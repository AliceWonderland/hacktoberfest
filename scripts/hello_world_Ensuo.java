// LANGUAGE: Java
// AUTHOR: Enzo Harada
// GITHUB: https://github.com/Ensuo

class hello_world{
    private String text = "Hello, World!";
    
    public void printText(){
        System.out.println(this.text);
    }

}

public class hello_world_Ensuo{
    public static void main(String[] args){
        hello_world hw = new hello_world();
        hw.printText();
    }
}