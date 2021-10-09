// LANGUAGE: JavaScript
// ENV: Node.js
// AUTHOR: Pedro Rosário
// GITHUB: https://github.com/pedrorosarioo

const myHello = [
        {key: 10, value: "And I'm on Hacktoberfest 2021!"},
        {key: 3, value: 'My name is Pedro Rosário\n'},
        { key: 6, value: "I'm from Brazil\n"},
        {key: 1, value: 'Hi!\n'}
    ];

myHello.forEach(pair => setTimeout(() => console.log(pair.value), pair.key))
