// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Aditi
// GITHUB: https://github.com/SavageSanta11
// LINK: http://es6-features.org/

// This hello world uses Javascript Objects and Classes.
// Creates a Person object using a Constructor function and a method greeting() that logs out and returns a greeting string.
// Written in ES5 and ES6 versions of Javascript. Comment out one of the versions before running.
// Try it for yourself here, https://repl.it/MIOm/11


// Javascript ES6
class Person {
  constructor (name='Anyonymous', location='USA') {
    this.name = name;
    this.place = location;
  }
  greeting (name=this.name) {
    let str = "Hello, World! by " + name;
    console.log(str);
    return str;
  }
}

var myself = new Person('Aditi','Bangalore');
myself.greeting();