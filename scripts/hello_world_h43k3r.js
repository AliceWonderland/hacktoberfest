var str = "Hello World!"
var newStr = ""
var arr = [1, 2, 3]
for (var i = 0; i < str.length; i++) {
    if (str[i] === "e") {
        newStr += "3"
    } else if (str[i] === "o") {
        newStr += "0"
    } else if (str[i] === "r") {
        newStr += "4"
    } else {
        newStr += str[i]
    }
}
newStr