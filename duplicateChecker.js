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
let count = {
    duplicate: 0,
    invalidContext: 0,
    total: 0,
    passed:0
};
let contributorMod=null;

function uniqueValidator(name, next) {
    let validation =
        uniqueObjNames.indexOf(name) > -1
            ? { duplicate: true }
            : uniqueObjNames.push(name);
    next(validation);

    /* if (uniqueObjNames.indexOf(name)>-1) next({ duplicate: true });
    else {
        uniqueObjNames.push(name);
        next(false);
    }*/
}

function contributorExtractor(contributor, type, next) {
    let temp = null;

    if (contributor.match(regEx[type]) == null)
        next({ invalidContext: true }, { error: { [type]: contributor } });
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
                        next(err, { [type]: temp });
                    } else next(false, { [type]: temp });
                });
            } else next(false, { [type]: temp });
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
                //let skip = false;
                contributorExtractor(contributor, type, (err, res) => {
                    if (err) {
                        Object.assign(filteredObj[index], err, res);
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
        next(false, filteredObj);
    });
}
/*    count.total = Object.keys(filteredObj).length;
    Object.keys(filteredObj).map(contributor => {
        if (contributor.invalidContext) count.invalidContext++;
        if (contributor.duplicate) count.duplicate++;
    });
    console.log(
        `Total:${count.total} Duplicates:${count.duplicate} Invalid:${count.invalidContext}`
    );
});*/


function contributorCleanUp(next){
    count.total = Object.keys(filteredObj).length;
    Object.keys(filteredObj).map(index => {
        //if (!!filteredObj[index]&&!!filteredObj[index]["invalidContext"]) {count.invalidContext++; delete filteredObj[index];}
        if (!!filteredObj[index]&&!!filteredObj[index]["duplicate"]) count.duplicate++; 
        if(!!filteredObj[index]&&!filteredObj[index]["invalidContext"]&&!filteredObj[index]["duplicate"]) {count.passed++;{
            count.passed++;
        contributorMod=contributorMod+`#### Name:${filteredObj[index]["Name"]}\n- Place:${filteredObj[index]["Place"]}\n- Bio:${filteredObj[index]["Bio"]}\n- GitHub:${filteredObj[index]["GitHub"]}\n`;}
        }
    });
    next(false,contributorMod);
}
contributorsFormatter((err, res) => {
    contributorCleanUp((err,res)=>{
        fs.writeFile('CONTRIBUTORS_MOD.md',res,(err)=>{
            console.log("Write Done");
        })
        console.log(
            `Total:${count.total} Duplicates:${count.duplicate} Invalid:${count.invalidContext} Passed:${count.passed}`
        );})
});
