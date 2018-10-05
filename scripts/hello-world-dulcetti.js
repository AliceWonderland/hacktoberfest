// LANGUAGE: Javascript
// ENV: JS/ES6
// AUTHOR: Bruno Dulcetti
// GITHUB: https://github.com/dulcetti

class Beer {
  constructor(name = 'Dulcetti', beerName = 'Karmeliet') {
    this.name = name;
    this.beerName = beerName;
  }

  sayHello() {
    console.info(`Hello, ${ this.name }. Do you wanna a ${ this.beerName }?`)
  }
}

// Hello with modified infos
const myInfos = new Beer('Bruno', 'Duvel');
myInfos.sayHello();

// Hello with default infos
const defaultBeer = new Beer();
defaultBeer.sayHello();
