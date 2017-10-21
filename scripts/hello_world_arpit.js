 // LANGUAGE:
// ENV: python 2.7
//  AUTHOR: Arpit kamal
//  GITHUB: https://github.com/Arpitkamal


 function ak(cb) {
     cb();
 }

 var myfun = function() {
     console.log("hello world");
 };

 ak(myfun);
