// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Bawer Agirman
// GITHUB: https://github.com/Bawer-Agirman

class Person {
  constructor(name='Rambo', age= 44, type='Guerilla'){
    this.name = name;
    this.age = age;
    this.type = type;
  }

  greet(){
    const hello = `Hi, my name is ${this.name} I'm ${this.age} years old and my type is ${this.type}`
    return hello;
  }
}

const me = new Person('Bawer', 20, 'Strong Businessman')
me.greet();