var Person = function(name,location){
  this.name = (name) ? name : "Thamidu Anjana";
  this.place = (location) ? location : "Sri Lanka";
}

Person.prototype.greeting = function(name){
  name = (name) ? name : this.name;
  var str = "Hello, World! by " + name;
  console.log(str);
  return str;
}

// Javascript ES6
class Person {
  constructor (name='Thamidu Anjana', location='Sri Lanka') {
    this.name = name;
    this.place = location;
  }
  greeting (name=this.name) {
    let str = "Hello, World! by " + name;
    console.log(str);
    return str;
  }
}

var myself = new Person('Thamidu Anjana','Sri Lanka');
myself.greeting();
