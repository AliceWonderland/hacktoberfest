// LANGUAGE: DART
// AUTHOR: Farhan Fadhilah Djabari
// GITHUB: https://github.com/FarhanFDjabari

class HelloWorld {
    static String? greetings;
    static final HelloWorld _hello = HelloWorld._internal(); 
  
    String? get getGreetings => greetings;

    factory HelloWorld() {
        greetings = 'Hello, World!';
        return _hello;
    }

    HelloWorld._internal();
}

void main() {
    var hello = HelloWorld();
    var world = HelloWorld();
    if (hello == world) print(hello.getGreetings);
}