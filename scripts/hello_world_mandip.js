// LANGUAGE: TypeScript
// ENV: Node.js
// AUTHOR: Mandip Giri
// GITHUB: https://github.com/MandipGiri
// ENJOYS: TS than JS

function printName(name) {
  if (typeof name != 'string') {
    console.error('Please provide string value')
    return
  }
  console.log('My name is:', name)
}
printName('Mandip Giri')
