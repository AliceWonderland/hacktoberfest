// LANGUAGE: Javascript
// AUTHOR: Nicko J. Ruddock
// GITHUB: https://github.com/GingerNinjaNicko

// This method asks the user whether they are nice
// if they are, they get the nice greeting, if not they get the mean greeting.
// if the input is not in the array then it asks again
// Try it for yourself here, https://codepen.io/GingerNinjaNicko/pen/b29a1d2fdf9ccff013166f647205b7d8?editors=0011

// run "app.init()" in the console to run again

/* Entire app wrapped in an object */
var app = {
	/* Vars */
	complete: false,
	niceGreet: "Why, Hello there fine fellow",
	meanGreet: "Urm, I don't like meanies...",
	niceWords: [
		"yes",
		"y",
		"indeed",
		"affirmative"
  ],
	meanWords: [
		"no",
		"n",
		"nope"
  ],
	/* Methods */
	checkResponse: function(nice, mean, userResponse){
		if (nice.indexOf(userResponse) !== -1){
			return "niceGreet";
		} else if (mean.indexOf(userResponse) !== -1) {
			return "meanGreet";
		}
	},
	
	init: function(){
		while (!app.complete){
			var res = prompt("Are you a nice person?").trim().toLowerCase();
			var result = app.checkResponse(app.niceWords, app.meanWords, res);

			if (result){
				app.complete = true;
				alert(app[result]);
			} else {
				alert("I didn't undertand that, please try again.");
			}
		}
	}
};

// run the app
app.init();