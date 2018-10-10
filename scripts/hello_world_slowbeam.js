// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Sandy Edwards
// GITHUB: https://github.com/slowbeam

log('Hello, World!');

function log(message) {
    const messageArr = message.split('');

    for (let Char of messageArr){
      console.log(char.toUpperCase())
    }

    console.log('Brought to you by Slowbeam...')
}
