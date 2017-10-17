// LANGUAGE: Javascript
// AUTHOR: Alex Frith
// GITHUB: https://github.com/Firthir
// RESOURCE: https://github.com/wesbos

const myName = [
  { name: 'Alex', year: 1988 },
  { name: 'Frith', year: 1986 },
  { name: 'GotA', year: 1970 },
  { name: 'TShirt', year: 2015 }
];
const isAdult = myName.some( person => (new Date().getFullYear()) - person.year >= 9 )
console.table({isAdult});
