// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Matt States
// GITHUB: https://github.com/mattstates

const hello = 'hello world';

function scramble (word = hello) {

    let letters = word.split('');
    let scrambled = [];

    while(letters.length) {

        scrambled = [...scrambled, letters.splice(Math.random() * (letters.length - 1), 1)[0]]

    }

    return scrambled.join('');

}

function countUntilMatched (word = hello) {

    let attemptCounter = 0;
    let cachedWord = scramble(word);

    while(word !== cachedWord) {

        cachedWord = scramble(word)
        attemptCounter++;
        console.log(attemptCounter, cachedWord);

    }

    console.log(`Matched "${word}" after ${attemptCounter} tries.`)

}

countUntilMatched();