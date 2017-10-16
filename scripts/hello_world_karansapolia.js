// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Karan Sapolia
// GITHUB: https://github.com/karansapolia

Notification.requestPermission().then(function(result) {
  console.log(result);
  var notification = new Notification("Hello World!", { body:"Hey guys"});
});
