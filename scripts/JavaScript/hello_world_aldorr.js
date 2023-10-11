// LANGUAGE: JavaScript
// ENV: Javascript
// AUTHOR: Allan Dorr
// GITHUB: https://github.com/aldorr

/* 	This simply gives a choice.
 *	If everything is peachy, it shows a "hello" message.
 *	If user decides things are looking bleak, there's the other message.
 */

document.addEventListener("DOMContentLoaded", function() { 
	var returnText = "Nothing.";
	var displayText = function(returnText) {
		var paragraph = document.createElement("p");
		var node = document.createTextNode(returnText);
		paragraph.appendChild(node);
		document.body.appendChild(paragraph);
	}
	if (confirm("Is life still flowers, World?") == true) {
		// display something good
		returnText = "Hello from Hamburg!";
		displayText(returnText);
	} else {
		// display something bad
		returnText = "Please don't Cancel your trip to Hamburg!";
		displayText(returnText);
	}
});