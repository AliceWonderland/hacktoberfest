// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: André Lima
// GITHUB: https://github.com/andrefalima

'use strict'

let helloWorld = 'Hello world!';
let hellos = 10;
let hello = "world";
let str = '';

function callHello(){   
    do {
        console.log(helloWorld + ' [ ' + (hellos) + ' ]' + str);
        hellos--;
    }while(hellos > 0);
};

callHello();