/*
 * LANGUAGE: Java
 * AUTHOR: V 
 * GITHUB: https://github.com/vivek1842
 */
public class hello_world_v {
    public static void main(String[] args) {
        Person myself = new Person("V", "India");
        myself.greeting();
    }
}
class Person {
    private String name;
    private String location;

    public Person(String name, String location) {
        this.name = (name != null) ? name : "Anonymous";
        this.location = (location != null) ? location : "India";
    }

    public String greeting() {
        String msg = "Hello, World! by " + name;
        System.out.println(msg);
        return msg;
    }
}