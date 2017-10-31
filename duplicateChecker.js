const fs = require("fs");
const re

// Matches contributors who have follwed the conventions in README.md
const regEx = "#{4}\s(.*\n){4}";


fs.readFile("CONTRIBUTORS.md", "utf-8", (err, contributors) => {
    if (err) console.log("Error:", err);

    contributors.split("\n").map((, index) => {
        console.log(`${index}=>${contributor}`)
    })

})