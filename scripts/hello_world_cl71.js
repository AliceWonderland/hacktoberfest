class HelloWorld {
  constructor() {
    this.message = "hello, world!";
  }

  printMessage() {
    console.log(this.message);
  }
}

const hello = new HelloWorld();
hello.printMessage();
