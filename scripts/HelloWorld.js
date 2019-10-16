const code = [72, 101, 108, 108, 111, 0, 87, 111, 114, 108, 100]

let codeToAscii = function(element) {
    return String.fromCharCode(element)
}

let result = code.map(codeToAscii).reduce(function (accumulator, currentValue) {
    return accumulator + currentValue
})

console.log(result)