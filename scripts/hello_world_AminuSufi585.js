// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Aminu Ibrahim Abubakar
// GITHUB: https://github.com/AminuSufi585

var express = require('express');
var app = express();

app.get('/', function (req, res) {
  res.send('Hello World!');
});

app.listen(3000, function () {
  console.log('Server started....');
});
