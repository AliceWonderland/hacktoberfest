// LANGUAGE: Javascript
// ENV: Node.js
/* REQUIREMENTS: 
    - Express.js (built-in, https://www.npmjs.com/package/express)
*/

var express = require('express');
var router = express.Router();


router.get('/', function(req, res, next) {
  res.send('Hello World 👋!');
});

module.exports = router;
