// LANGUAGE : JAVASCRIPT
// ENV : Node.js
// AUTHOR : saikiran76
// GITHUB : https://github.com/saikiran76

/* A unique asynchronous approach of printing Hello World,
It prints hello world message in the console taking 1s of your time */

function print(){
    console.log('Hello World');
}

function bringHello(){
    setTimeout(print, 1000);
}

console.log(bringHello());