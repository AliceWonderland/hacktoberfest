// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Medson Mendes
// GITHUB: https://github.com/medson

// Running: be sure of you have NodeJs installed, after, type on terminal at scripts folder of project:
// `node hello_world_medson.js`

// Your name will be asked and just type it, in your terminal :)

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Please, type your name\n', name =>  {
    console.log(`Hi, ${name}!!`)
    rl.close()
})
