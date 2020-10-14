// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Hansika Herath
// GITHUB:https://github.com/hansikaherath




  class Person {
    constructor (name='Anomyous', location='Sri Lanka') {
      this.name = name;
      this.place = location;
    }
    greeting (name=this.name) {
      let str = "Hello, World! by " + name;
      console.log(str);
      return str;
    }
  }
  
  var myself = new Person('Hansika','Herath');
  myself.greeting();
  