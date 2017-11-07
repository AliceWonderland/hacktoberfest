const fs = require("fs");

// Matches contributors who have follwed the conventions in README.md
const regEx = {
    global: /#{4}\s(.*\n){4}/g,
    Name: /(?=Name:).*/g,
    Place: /(?=Place:).*/g,
    Bio: /(?=Bio:).*/g,
    GitHub: /(?=GitHub:).*/g
}

let filteredObj = {};

function contributorExtractor(contributor, type, next) {
    let temp = !!(contributor.match(regEx[type])[0]) ? (contributor.match(regEx[type])[0]) : false;
    if (temp) {
        temp = temp.replace(`${type}:`, "");
        next(false, temp);
    } else next(true);
}

fs.readFile("CONTRIBUTORS.md", "utf-8", (err, contributors) => {
    if (err) console.log("Error:", err);

    let filteredList = contributors.match(regEx.global);
    filteredList.map((contributor, index) => {
        ["Name", "Place", "Bio", "GitHub"].every(type => {
            let skip = false;
            contributorExtractor(contributor, type, (err, res) => {
                if (err) {
                    skip = true;
                    !!filteredObj[index] ? delete filteredObj[index] : false;
                } else {
                    filteredObj[index] = {};
                    filteredObj[index][type] = "";
                    filteredObj[index][type] = res;
                }
            });
            if (skip)
                return false;
        })
    })
})