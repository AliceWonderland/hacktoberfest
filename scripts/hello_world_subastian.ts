// LANGUAGE: Javascript
// ENV: Typescript.js
// AUTHOR: Subastian
// GITHUB: https://github.com/subastianSk

// define the class with constructor
class Author {
    constructor (public Name: string) { }
}

// create the instance of the class
let author = new Author("SubastianSK");

// print the information in the console
console.log(`\t~ ${author.Name}`);