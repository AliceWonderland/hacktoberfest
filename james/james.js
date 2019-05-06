// ENV: Node.js
// AUTHOR: Bob Stranger
// GITHUB: https://github.com/JamesUfondu/james-ufondu-hacktoberfest


function aFunction() {
	//variable for function

var a = document.getElementById("input").value;
//simple if else statement

 if (a === "hacktoberfest" || a === "github" || a === "gitlab"  || a === "opensource"){
 	document.getElementById("text").innerHTML = "I love opensource technology";
 }
 else{
    document.getElementById("text").innerHTML = "Please join opensource technology you will enjoy it";
 }
}

