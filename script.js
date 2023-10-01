
const inword=document.querySelectorAll(".button");
const result=document.querySelector(".result");
const choice=document.querySelector(".choice");
const score=document.querySelector(".score")
var userscore=0;
var compscore=0;


inword.forEach((userword) => {
    userword.addEventListener("click",()=>{
    const userin=userword.id;
    const words=["rock","paper","scissor"];
    const word=words[Math.floor(Math.random()* 3)];
    fun(word,userin);
  });
});
score.textContent="User = "+userscore+" : Computer = "+compscore;
function fun(a,b){
  choice.textContent="Your choice is "+a+" &  Computer choice is "+b;
  if(a==b){
    result.textContent="Tie!!!"}
  else if(a=="rock" && b=="paper"){
    result.textContent="Congrats!!, you won"
    userscore++;
    score.textContent="User = "+userscore+" : Computer = "+compscore;
  }
  else if(a=="paper" && b=="scissors"){
    result.textContent="Congrats!!, you won"
    userscore++;
    score.textContent="User = "+userscore+" : Computer = "+compscore;
  }
  else if(a=="scissors" && b=="rock"){
    result.textContent="Congrats!!, You won"
    userscore++;
    score.textContent="User = "+userscore+" : Computer = "+compscore;
  }
  else{
    result.textContent="You loss!!! Better luck next time."
    compscore++;
    score.textContent="User = "+userscore+" : Computer = "+compscore;
  }
}



