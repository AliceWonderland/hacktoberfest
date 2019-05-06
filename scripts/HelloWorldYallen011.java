// LANGUAGE: Java
// ENV: VSCode
// AUTHOR: Yvonne Allen
// GITHUB: https://github.com/yallen011

public class HelloWorldYallen011 {

    static class Person {
        String name;
        String message;

        Person(String name, String message) {
            this.name = name;
            this.message = message;

        }

        public String getName() {
            return this.name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public String getMessage() {
            return this.message;
        }

        public void setMessage(String message) {
            this.message = message;
        }

        @Override
        public String toString() {
            return getMessage() + " " + getName();
        }

    }

    public static void main(String[] args) {
        Person person = new Person("Carl", "What's up");
        System.out.println(person.toString());
    }

}