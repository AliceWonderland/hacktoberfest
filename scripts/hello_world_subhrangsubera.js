// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Subhrangsu Bera
// GITHUB: https://github.com/Subhrangsu90

// Using a constructor function
function Person(name) {
  this.name = name;
}

Person.prototype.greeting = function () {
  return `Hello Dev World! my name is ${this.name}.`;
};

const person1 = new Person("Subhrangsu");
console.log(person1.greeting()); // Output: Hello Dev World! my name is Subhrangsu.

// Using a class
class PersonClass {
  constructor(name) {
    this.name = name;
  }

  greeting() {
    return `Hello Dev World! my name is ${this.name}.`;
  }
}

const person2 = new PersonClass("Subha");
console.log(person2.greeting()); // Output: Hello Dev World! my name is Subha.
