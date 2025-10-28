// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Jeevan Chapagain
// GITHUB: https://github.com/jeevanc
/* REQUIREMENTS: 
    - Express.js (built-in, https://www.npmjs.com/package/express)
*/

const  express = require('express');
const  router = express.Router();


router.get('/', function(req, res, next) {
  res.send('Hello World!');
});

module.exports = router;
