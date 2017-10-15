/**
 * Created by lilybell on 10/15/17.
 */

let Languages = ['English', 'German', 'French', 'Spanish', 'Dutch', 'Portuguese', 'Arabic', 'Japanese'];

let Greetings = ['Hello World!', 'Hallo Welt!', 'Bonjour le monde!', 'Hola Mundo!', 'Hallo Wereld!', 'Olá Mundo!', 'مرحبا بالعالم!', '「こんにちは世界」' ];

function RandomLangHello() {
    const Length = Languages.length;
    const RandInt = Math.floor(Math.random() * Length) + 1;
    const Lang = Languages[RandInt];
    const Greeting = Greetings[RandInt];

    return [Lang, Greeting];
}

if (document.readyState !== 'loading') {
    const Greet = RandomLangHello();
    alert(Greet[1] + 'Now you can say Hello World! in ' + Greet[0] + '!' );
}