// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: dahhou ilyas
// GITHUB: https://github.com/dahhou-ilyas

(function() {
    const text = "Hello,World!";
    let visible = true;
  
    function blink() {
      if (visible) {
        console.log(text);
      } else {
        console.clear();
      }
      visible = !visible;
      setTimeout(blink, 1000); // Change la vitesse de clignotement ici (en millisecondes)
    }
  
    blink();
  })();