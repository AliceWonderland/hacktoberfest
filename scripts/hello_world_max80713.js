/* LANGUAGE: JavaScript
 * ENV: Node.js
 * AUTHOR: max80713
 * GITHUB: https://github.com/max80713
 */

const whatIJustWantToSay = 'Hello, World!';

const butIAmNervous = (sentence) => sentence.split('').sort(() => 0.5 - Math.random()).join('');

let whatIAmTryingToSay = '';

do {
  whatIAmTryingToSay = butIAmNervous(whatIJustWantToSay);
} while(whatIAmTryingToSay !== whatIJustWantToSay)

console.log(whatIJustWantToSay);
