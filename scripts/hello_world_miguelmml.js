// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Miguel Martín-Maestro López
// GITHUB: https://github.com/miguelmml

let str = 'Hello World'
let counter = 0

str.split('').forEach((letter) => {
  counter += 150
  setTimeout(() => {
    console.log(letter)
  }, counter)
})
