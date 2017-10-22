// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Ignas Ausiejus
// GITHUB: https://github.com/IgnasA

var express = require("express");
var app = express();


app.get('/', function(req, res){
  res.send('Hello World!');
});
