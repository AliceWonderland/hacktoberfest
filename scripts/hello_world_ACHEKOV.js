// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Asen Chekov
// GITHUB: https://github.com/asenchekov

let mixed = "ehlrdoollw";

const hello = "hello";
const world = "world";
let new_Hello = [];
let new_World = [];

for (let i = 0, j = 0; j < hello.length; i++) {
  if (i == mixed.length) {
    i = 0;
  }
  if (j == 0 && mixed[i] == hello[j]) {
    new_Hello[j] = mixed[i].toUpperCase();
    console.log(new_Hello);
    j++;
  }
  if (mixed[i] == hello[j]) {
    new_Hello[j] = mixed[i];
    console.log(new_Hello);
    j++;
  }
}

for (let i = 0, j = 0; j < hello.length; i++) {
  if (i == mixed.length) {
    i = 0;
  }
  if (j == 0 && mixed[i] == world[j]) {
    new_World[j] = mixed[i].toUpperCase();
    console.log(new_World);
    j++;
  }
  if (mixed[i] == world[j]) {
    new_World[j] = mixed[i];
    console.log(new_World);
    j++;
  }
}
console.log(new_Hello.join("") + " " + new_World.join("") + "!");
