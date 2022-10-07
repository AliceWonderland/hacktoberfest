// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Akash Singh
// GITHUB: https://github.com/akashakara
// LINK: http://es6-features.org/

// Javascript ES6
class Person {
  constructor (name='Akash', location='India') {
    this.name = name;
    this.place = location;
  }
  greeting (name=this.name) {
    let str = "Hello, World! by " + name;
    console.log(str);
    return str;
  }
}

var myself = new Person('John','France');
myself.greeting();
