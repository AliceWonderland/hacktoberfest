// LANGUAGE: Swift
// ENV: Swift 4
// AUTHOR: Xcode User
// GITHUB: https://github.com/xcodeuser

let h = "h"
let e = "e"
let l = "l"
let o = "o"
let w = "w"
let r = "r"
let d = "d"
let comma = ","
let space = " "
let exclamation = "!"
let capitalize = String.uppercased
let capitalH = capitalize(h)()
let capitalW = capitalize(w)()
var helloWorld = ""
for character in "Hello, World!".characters {
    let characterString = String(character)
    for stringCharacter in [e, l, o, r, d, comma, space, exclamation, capitalH, capitalW] {
        if characterString == stringCharacter {
            helloWorld += stringCharacter
            continue
        }
    }
}
print(helloWorld)
