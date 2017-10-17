/**
 * This is a stupid way to say hello the world, and you probably shouldn't do it
 */
    class HelloWorld {
        constructor(public message: string) { }

        sayHi() {
            return this.message;
        }
    }

    alert(new HelloWorld("Hello, world!").sayHi());
