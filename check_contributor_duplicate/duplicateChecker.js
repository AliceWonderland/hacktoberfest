/**
 * Author: Shashank K
 * Env: NodeJS
 * Language: Javascript
 * GitHub: https://github.com/shashankKeshava
 **/

/**
 * Matches the contributors who have followed the conventions in README.md
 * Convention:
 * #### Name: [YOUR NAME](GitHub link)
 * - Place: City, State, Country
 * - Bio: Who are you?
 * - GitHub: [GitHub account name](GitHub link)
 **/

const fs = require("fs");
const regEx = {
    global: /#{4}\s(.*\n){4}/g,
    Name: /(?=Name:).*/g,
    Place: /(?=Place:).*/g,
    Bio: /(?=Bio:).*/g,
    GitHub: /(?=Git[H|h]ub:).*/g //To include Git(h/H)ub replace regEx expression with "/(?=Git[H|h]ub:*/g)"
};

let filteredObj = {};
let uniqueObjNames = [];
let contributorMod = "";
let count = {
    duplicate: 0,
    total: 0,
    passed: 0
};

function uniqueValidator(name, next) {
    let validation = uniqueObjNames.indexOf(name) > -1 ? { duplicate: true } : uniqueObjNames.push(name);
    next(validation);
}

function contributorExtractor(contributor, type, next) {
    let temp = null;
    if (contributor.match(regEx[type]) == null)
        next({ invalidContext: true }, {
            error: {
                [type]: contributor
            }
        });
    else {
        temp = !!contributor.match(regEx[type])[0] ? contributor.match(regEx[type])[0] : false;

        if (temp) {
            temp = (type == "GitHub" && contributor.match(/(?=Github).*/g)) ? temp.replace("Github", "") : temp.replace(`${type}:`, "");
            if (type == "Name") {
                uniqueValidator(temp, (err, res) => {
                    if (err) {
                        next(err, {
                            [type]: temp
                        });
                    } else next(false, {
                        [type]: temp
                    });
                });
            } else next(false, {
                [type]: temp
            });
        } else next({ invalidContext: true }, contributor);
    }
}

function contributorsFormatter(next) {
    fs.readFile("CONTRIBUTORS.md", "utf-8", (err, contributors) => {
        if (err) console.log("Error:", err);
        let filteredList = contributors.match(regEx.global);
        filteredList.map((contributor, index) => {
            filteredObj[index] = {};
            ["Name", "Place", "Bio", "GitHub"].forEach(type => {
                contributorExtractor(contributor, type, (err, res) => {
                    err ? Object.assign(filteredObj[index], err, res) : Object.assign(filteredObj[index], res);
                });
            });
            console.log(filteredObj[index]);
        });
        next(false, filteredObj);
    });
}

function contributorCleanUp(next) {
    count.total = Object.keys(filteredObj).length;
    Object.keys(filteredObj).map(index => {
        if (!!filteredObj[index] && !!filteredObj[index]["duplicate"])
            count.duplicate++;
        if (!filteredObj[index]["invalidContext"] && !filteredObj[index]["duplicate"]) {
            count.passed++;
            contributorMod =
                contributorMod +
                `#### Name:${filteredObj[index]["Name"]}\n- Place:${
                    filteredObj[index]["Place"]
                }\n- Bio:${filteredObj[index]["Bio"]}\n- GitHub:${
                    filteredObj[index]["GitHub"]
                }\n\n`;
        }
    });
    next(false, contributorMod);
}
contributorsFormatter((err, res) => {
    contributorCleanUp((err, res) => {
        fs.writeFile("CONTRIBUTORS_MOD.md", res, err => {
            console.log("\n Write Completed: CONTRIBUTORS_MOD.md\n");
        });
        console.log(
            `\n\nTotal:${count.total} Duplicates:${count.duplicate} Passed:${
                count.passed
            } \n\n ***** The Count does not include Contributors using invalid convenction *****`
        );
    });
});

// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Shashank K
// GITHUB: https://github.com/shashankKeshava