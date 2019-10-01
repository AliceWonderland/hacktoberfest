// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Nnaji Victor
// GITHUB: https://github.com/Nnaji-Victor

// This hello world uses javascript functions. If when called without a parameter, 
// it would resort to hello stranger, hello world 
// if called with a parameter, it would result in hello parameter, hello world

function greet(name = "Stranger") {
    console.log("Hello " + name+", Hello World");
}



