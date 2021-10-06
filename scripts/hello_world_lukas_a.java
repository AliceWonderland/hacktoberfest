public class hello_world_lukas_a {

    interface World {

        void sayHello();

    }

    static class HelloWorld implements World {

        @Override
        public void sayHello() {
            System.out.println("Hello World");
        }

    }

    public static void main(String[] args) {
        World world = new HelloWorld();
        world.sayHello();
    }

}
