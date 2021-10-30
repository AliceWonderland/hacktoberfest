// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: N Sarkar
// GITHUB: https://github.com/nsbits
// LINK: http://es6-features.org/

// This hello world uses Javascript Objects and Classes.
// Creates a Person object using a Constructor function and a method greeting() that logs out and returns a greeting string.
// Written in ES5 and ES6 versions of Javascript. Comment out one of the versions before running.
// Try it for yourself here, https://repl.it/MIOm/11


// Javascript ES5
var Person = function(name,location){
  this.name = (name) ? name : "Anyonymous";
  this.place = (location) ? location : "India";
}

Person.prototype.greeting = function(name){
  name = (name) ? name : this.name;
  var str = "Hello, World! by " + name;
  console.log(str);
  return str;
}

// Javascript ES6
class Person {
  constructor (name='Anyonymous', location='India') {
    this.name = name;
    this.place = location;
  }
  greeting (name=this.name) {
    let str = "Hello, World! by " + name;
    console.log(str);
    return str;
  }
}

var myself = new Person('N Sarkar','KGP');
myself.greeting();
