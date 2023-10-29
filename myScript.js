// selection du DOM
const questionContainer = document.querySelector(".click-event");
const btn1 = document.getElementById("btn-1");
const btn2 = document.getElementById("btn-2");
const answer = document.querySelector("p");

// click event
questionContainer.addEventListener('click', () => {
});

btn1.addEventListener('click', () => {
    answer.style.background = "green";
    answer.classList.toggle("show-response")
});

btn2.addEventListener('click', () => {
    answer.style.background = "red";
    answer.classList.toggle("show-response")
})

// --------------------------------------------------------------------

// Mouse Event
// selection du Dom
/*const mousemove = document.querySelector(".mousemove");

window.addEventListener('mousemove', (e) => {
    mousemove.style.left = e.pageX + "px";
    mousemove.style.top = e.pageY + "px"
});

window.addEventListener('mousedown', () => {
    mousemove.style.transform = "scale(2) translate(-25%, -25%)"
});

window.addEventListener('mouseup', () => {
    mousemove.style.transform = "scale(1) translate(-50%, -50%)";
    mousemove.style.border = "2px solid teal"
});

questionContainer.addEventListener('mouseenter', () => {
    questionContainer.style.background = "rgba(0,0,0,0.6)";
});

questionContainer.addEventListener('mouseout', () => {
    questionContainer.style.background = "pink"
})

answer.addEventListener('mouseover', () => {
    answer.style.transform = "rotate(2deg)"
});*/

// --------------------------------------------------------------------
// KeyPress Event
// selection du DOM
const keyPressContainer = document.querySelector(".keypress");
const key = document.getElementById("key");

const ring = () => {
    const audio = new Audio();
    audio.src = "Enter.mp3";
    audio.play();
};

document.addEventListener('keypress', (e) => {
    key.textContent = (e.key);

    if(e.key === "j") {
        keyPressContainer.style.background = "pink"
    } else if(e.key === "h") {
        keyPressContainer.style.background = "red"
    } else {
        keyPressContainer.style.background = "black"
    }

    // ring();
});

// --------------------------------------------------------------------
// Scroll Event
// selection du DOM

const nav = document.querySelector("nav");

window.addEventListener('scroll', () => {

    if(window.scrollY > 120) {
        nav.style.top = 0;
    } else {
        nav.style.top = "-50px";
    }
});

// --------------------------------------------------------------------
// Form Events
// selection du DOM
const inputName = document.querySelector('input[type="text"]');
const select = document.querySelector("select");
const form = document.querySelector("form");
var pseudo = "";
var language = "";

inputName.addEventListener("input", (e) => {
    pseudo = e.target.value;
});

select.addEventListener("input", (e) => {
    language = e.target.value;
});

form.addEventListener('submit', (e) => {
    e.preventDefault();

   if(cgv.checked) {
        document.querySelector("form > div").innerHTML = `
        <h3>Pseudo : ${pseudo}</h3>
        <h4>Langage prefere : ${language}</h4>
        `;
    } else {
        alert("veillez accepter les CGV")
    }
})

// --------------------------------------------------------------------
// Load Event
window.addEventListener('load', () => {
    console.log("document charge");
});

// --------------------------------------------------------------------
// ForEach
// selection du DOM
const boxes = document.querySelectorAll(".box");

/*boxes.forEach((box) => {
    box.addEventListener('click', (e) => {
        e.target.style.transform = "scale(0.7)"
    })
})*/

// --------------------------------------------------------------------
// addEventListener Vs onclick
// document.body.onclick = () => {
//     console.log("test !!!");
// };

// Bubbling => fin (de base l'eventListener est parametre en mode Bubbling)
document.body.addEventListener('click', () => {
    console.log("click 1 !");
});

// Usecapture
document.body.addEventListener('click', () => {
    console.log("click 2 !");
}, true);

// --------------------------------------------------------------------
// stop propagation
questionContainer.addEventListener('click', (e) => {
    // alert("test !");
    e.stopPropagation();
});

// --------------------------------------------------------------------
// BOM

// window.open("http://google.com", "cours js", "height=600, width=800");
// window.close

// Evénement adossés a window
// confirm
btn2.addEventListener('click', () => {
    confirm("voulez vous vraiment choisir cette reponse")
});

// prompt
btn1.addEventListener('click', () => {
   var affichage =  prompt("Entrez votre nom");

   questionContainer.innerHTML += "<h3>Bravo " + affichage + "</h3>"
});

// Timer, compte a rebbours
setTimeout(() => {
    questionContainer.style.borderRadius  = "300px"
}, 3000);

// Interval
/*var interval = setInterval(() => {
    document.body.innerHTML += `
      <div class="box">
          <h2>Nouvelle Boite !</h2>
      </div>
    `;
}, 2000);

// Arret de l' Interval
document.body.addEventListener('click', (e) => {
    e.target.remove();
    clearInterval(interval);
});*/

// Location
// console.log(location.href);
// console.log(location.host);
// console.log(location.pathname);
// console.log(location.search);

// window.onload = () => {
//     location.href = "http://twiter.fr"
// };

// Navigator
// console.log(navigator.userAgent);

// --------------------------------------------------------------------
// SetProprety
window.addEventListener('mousemove', (e) => {
    nav.style.setProperty("--x", e.layerX + "px");
    nav.style.setProperty("--y", e.layerY + "px");
   
})

