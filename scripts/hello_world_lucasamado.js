// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Lucas amado
// GITHUB: https://github.com/SylarK

console.log('Hello, Wonderful World!');

class Person{
    constructor(firstName='uninformed', lastName='uninformed'){
        this.firstName = firstName;
        this.lastName = lastName;
    }

    sayHello(firstName=this.firstName, lastName=this.lastName){
        let text = `Hello World!\nHello everyone!! \nMy name is ${firstName} ${lastName}`;
        console.log(text);
        return text;
    }
}

let person1 = new Person('Lucas', 'Amado');
person1.sayHello();

