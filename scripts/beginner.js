function avg(a,b){
    c=a+b/2;
    return c;
}
c1=avg(1,2);
c2=avg(3,4);
//conditionals
var age=34;
if (age>=34){
    console.log('you are kid');
}
else
{
    console.log("you are not kid");
}
//single if statement
//if else statement

//else if ladder

if(age>2)
{
    console.log('you are not a kid');
}
else if(age>=2){

    console.log('bache nahi rahe');
}
else if(age>=3){
    console.log('bache ladki hai');
}
else{
    console.log('log chuthiya hai');
}
//switch condition in javascript

switch('age'){
    case 1:
        log.console("hello");
        break;

    case 2:
        log.console('maro');
        break;

    default:
        log.console('ok');
        break;

}
//array in js
var arr=[2,3,4,5,6,7,8];
console.log(arr)
//iterate array in javascript
for(var i=0 ;i<arr.length;i++)
{
    console.log(arr[i]);
}
//for each also similar like for loop
arr.forEach(function(element){
    console.log(element);
})

let b=0;
const g=0;


//while loop in javascript
let j=0;
while(j<arr.length){
    console.log(arr[j]);
    j++;
}
//do while loop
let k=0;
do{

    console.log(arr[k]);
    k++
}while(k<arr.length);
//break statement and continue statement in javascript
for (var n=1; n<arr.length;n++){
    if(n==2)
    {
        continue;
    }
    console.log(arr[n]);

}
//arr
let myarr=['aa','aa','c']
console.log(myarr.length);
//length display
myarr.pop();
//remove an element
myarr.push("hhhi");
//add an element 
myarr.shift();
//first element remove
myarr.unshift("hhhi");
//element will be add to first

//if add console in begining of the unshift
console.log(myarr.unshift("hhi"));
//it will display the count/len of new array
const newLen=myarr.unshift("hhh");
console.log(newLen);

//explore array methods will be benificial
myarr.sort();
myarr.toString();
//slice ,value of 

//string methods in javascript
let c="hello bhai";
console.log(c.length)
console.log(c.indexOf("bhai"));
console.log(c.lastIndexOf("bhai"));
console.log(c.slice(1,2));
d=c.replace("bhai","jon")
console.log(d,c)
//replace words
//javascript dates


let mydate=new Date()
console.log(mydate)
console.log(mydate.getDate)
console.log(mydate.getHours)
//creating date
//dom manipulation

document.location

//html document object, we can dynamically show
document.getElementById("click").click()
//id is unique
let elem=document.getElementById('jock')
console.log(elem)

let elemclass=document.getElementsByClassName('container')
console.log(elemclass)
elemclass[0].classList.add('text-success')
document.getElementsByTagName('asjdj').click()
document.getElementById('click').style.border='blue';
//how to manipulate html with dom 
//class have multiple id's
//inside style{    .container{   border : 2px solid red; margin : 3px  0;  padding 0 ;   you can do alot}}
//dom manipulation
document.getElementById('click me').click()
console.log()
let f =document.getElementsByClassName('container')
console.log(f)
elem[0].style.background="yellow"
//you can change and target element using css
//.bg-primary{   } csss
elem[0].classList.add('bg-primary')
//.text-success{   }
elem[0].classList.add('text-success')
elem[0].classList.remove('text-success')

//how to get inner text

console.log(elem.innerHTML)
console.log(elem.innerText)




