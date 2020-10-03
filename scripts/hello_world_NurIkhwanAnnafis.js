// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Nur Ikhwan Annafis
// GITHUB: https://github.com/NurIkhwanAnnafis

var express = require("express");
var app = express();

app.get('/', function(req, res){
  res.send('Hello World!');
});
