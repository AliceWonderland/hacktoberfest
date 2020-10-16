// LANGUAGE: Javas //Getter Setter
// ENV: Java 8 
// AUTHOR: Noopur Agarwal
// GITHUB: https://github.com/noopurAg

class Hello_world_noopurAg {
    String greeting = " ";

    public String getGreeting(){
        return greeting;
    }
    public void setGreeting(String msg){
        greeting = msg;
    }
    public static void main(String[] args) {
        HelloWorld hw = new HelloWorld();
        //my first hello to the hacktober world 

        hw.setGreeting("Hello  World......!");
     
        System.out.println(hw.getGreeting());
    }
}