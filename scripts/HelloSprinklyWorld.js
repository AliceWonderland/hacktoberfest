let hello = "Hello World!";


let helloInt = setInterval(() => {
    let red = Math.ceil(Math.random() * 255);
    let green = Math.ceil(Math.random() * 255);
    let blue = Math.ceil(Math.random() * 255);

    hello.style.color = `rgb(${red}, ${green}, ${blue})`;

}, 1000);


