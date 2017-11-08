const fs = require("fs");

// Matches contributors who have follwed the conventions in README.md
const regEx = {
    global: /#{4}\s(.*\n){4}/g,
    Name: /(?=Name:).*/g,
    Place: /(?=Place:).*/g,
    Bio: /(?=Bio:).*/g,
    GitHub: /(?=GitHub:).*/g
};

let filteredObj = {};
let uniqueObjNames = [];

function uniqueValidator(name, next) {
    if (uniqueObjNames.indexOf(name)) next({ duplicate: true });
    else {
        uniqueObjNames.push(name);
        next(false);
    }
}

function contributorExtractor(contributor, type, next) {
    let temp = null;

    if (contributor.match(regEx[type]) == null)
        next({ invalidContext: true }, contributor);
    else {
        if (contributor.match(regEx[type]) == null) debugger;

        temp = !!contributor.match(regEx[type])[0]
            ? contributor.match(regEx[type])[0]
            : false;

        if (temp) {
            temp = temp.replace(`${type}:`, "");
            if (type == "Name") {
                uniqueValidator(temp, (err, res) => {
                    if (err) {
                        next(err,contributor);
                    } else next(false, { [type]: temp });
                });
            } else next(false, { [type]: temp });
        } else next({ invalidContext: true }, contributor);
    }
}

fs.readFile("CONTRIBUTORS.md", "utf-8", (err, contributors) => {
    if (err) console.log("Error:", err);

    let filteredList = contributors.match(regEx.global);
    filteredList.map((contributor, index) => {
        filteredObj[index] = {};
        ["Name", "Place", "Bio", "GitHub"].forEach(type => {
            //let skip = false;
            contributorExtractor(contributor, type, (err, res) => {
                if (err) {
                    Object.assign(filteredObj[index], err,...res);
                    //skip = true;
                    //!!filteredObj[index] ? delete filteredObj[index] : false;
                } else {
                    Object.assign(filteredObj[index], res);
                }
            });
            //if (skip) return false;
        });
        console.log(filteredObj[index]);
        //console.log(Object.keys(filteredObj[index]).length);
    });
});
