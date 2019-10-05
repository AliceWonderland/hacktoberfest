// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Ruta Puodziunaite
// GITHUB: https://github.com/rutuke

var express = require("express");
var app = express();


app.get('/', function(req, res){
  res.send('Hello World!');
});
