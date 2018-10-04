// LANGUAGE: JavaScript
// ENV: Node.js
// AUTHOR: Simey de Klerk, https://twitter.com/simeydeklerk
// GITHUB: https://github.com/simeydk

const words = {
    en: ['Hello', 'World'],
    af: ['Hallo', 'Wêreld']
}

const str = words.['af'].join(', ') + '!'

console.log(str);