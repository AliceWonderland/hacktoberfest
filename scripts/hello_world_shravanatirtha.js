// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Shravana Tirtha
// GITHUB: https://github.com/shravanatirtha

// This hello world uses Javascript Objects and Classes.
// Creates a Person object using a Constructor function and a method welcome() that returns a welcome string.
// Written in ES6 versions of Javascript.

  class User {
    constructor (name='User', location='India') {
      this.name = name;
      this.place = location;
    }
    welcome (name=this.name) {
      let str = "Hello, World! by " + name;
      alert(str);
      return str;
    }
  }
  
  var creator = new User('Shravana','India');
  creator.welcome();