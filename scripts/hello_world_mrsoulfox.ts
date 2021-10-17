// LANGUAGE: TypeScript
// ENV: Node.js and TypeScript
// AUTHOR: Marcos Paulo
// GITHUB: https://github.com/mr-soulfox

class HelloWorld{
    msg: string;

    constructor(msg: string) {
        this.msg = msg;
    }

    writeHello() {
        console.log(this.msg);
    }
};

const helloWorld = new HelloWorld("Hello, World!");
helloWorld.writeHello();
