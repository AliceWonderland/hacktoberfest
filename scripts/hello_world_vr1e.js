// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Nikola Vrhovac
// GITHUB: https://github.com/vr1e

const newWorld = 'helloworld';
let greeting = new String;
greeting = greeting.concat(newWorld.slice(0, newWorld.length/2), ', ', newWorld
    .slice(newWorld.length/2, newWorld.length), '!')
    .replace(/\w\S*/g, function(txt){
      return txt.charAt(0).toUpperCase() + txt.substr(1).toLowerCase();
  });
console.log(greeting);
