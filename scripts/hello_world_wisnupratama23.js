// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Wisnu Pratama
// GITHUB: https://github.com/wisnupratama24

const newWorld = "helloworld";
let greeting = new String();
greeting = greeting
  .concat(
    newWorld.slice(0, newWorld.length / 2),
    ", ",
    newWorld.slice(newWorld.length / 2, newWorld.length),
    "!"
  )
  .replace(/\w\S*/g, function (txt) {
    return txt.charAt(0).toUpperCase() + txt.substr(1).toLowerCase();
  });
console.log(greeting);
