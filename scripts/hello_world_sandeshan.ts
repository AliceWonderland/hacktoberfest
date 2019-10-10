// LANGUAGE: Typescript
// ENV: Node.js
// AUTHOR: Sandesh Naik
// GITHUB: https://github.com/sandeshan
// LINK: http://www.typescriptlang.org/

// Creates a Person object using a Constructor function and a method greet() that logs out a greeting string.
// Written in Typescript.

class Person {
  firstName: string;
  lastName: string;
  constructor(firstName: string, lastName: string) {
    this.firstName = firstName;
    this.lastName = lastName;
  }
  greet = () => {
    console.log(`Hello ${this.firstName} ${this.lastName}!`);
  };
}

let myself = new Person("Sandesh", "Naik");
myself.greet();
