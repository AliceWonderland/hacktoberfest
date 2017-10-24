// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Vignesh Kumar
// GITHUB: https://github.com/happyvig

'use strict';

// Javascript ES6
let Greeter = class {
    constructor() {
        this.greeting = `${'Hello'} ${'World'}`; 
    }
}

class ExpressiveGreeter extends Greeter{
    constructor() {
        super();
    }
    greet() {
        console.log(this.greeting + ' !!!!!!!!');
    }
}

let expressiveGreeter = new ExpressiveGreeter();
expressiveGreeter.greet();