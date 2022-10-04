// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Mattis
// GITHUB: https://github.com/mamphis
const process = require('node:process');

const fd = process.stdout;
const helloBuffer = Buffer.from('Hello, ');
const worldBuffer = Buffer.from('World!');

fd.write(helloBuffer);
fd.end(worldBuffer);

fd.destroy();
