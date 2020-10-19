// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Patricia Felix
// GITHUB: https://github.com/patriciafelixx

// DEPENDENCIES: Express

const express = require('express');
const app = express();

app.get('/', (req, res) => {
    res.send('Hello World!');
})

app.listen(3333, () => {
    console.log('app running on port 3333...');
})