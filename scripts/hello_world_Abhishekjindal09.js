// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Abhishek Jindal
// GITHUB: https://github.com/Abhishekjindal09

// Javascript ES5
var Person = function (name, location) {
  this.name = name ? name : "Unknown";
  this.place = location ? location : "INDIA";
};

Person.prototype.greeting = function (name) {
  name = name ? name : this.name;
  var str = "Hello, World! by " + name;
  console.log(str);
  return str;
};

// Javascript ES6
class Person {
  constructor(name = "Unknown", location = "INDIA") {
    this.name = name;
    this.place = location;
  }
  greeting(name = this.name) {
    let str = "Hello, World! by " + name;
    console.log(str);
    return str;
  }
}

var myself = new Person("Abhishek", "New-Delhi");
myself.greeting();
