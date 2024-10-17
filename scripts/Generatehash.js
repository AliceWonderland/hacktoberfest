//o|p: '#MyNameIsDinkyTechnical
//given: if the length of the input string is greater than 200 characaters or if the string is empty or contain whitespace the function should return false.


const generateHash=(str)=>{
   if(str.length>280 ||str.trim().length === 0){
    return false;
   } 
   else{

    str = str.split(" ");      //[ 'my', 'name', 'is', 'dinky', 'technical' ]
    str= str.map((curElem)=>curElem.replace(curElem[0], curElem[0].toUpperCase()));      //[ 'My', 'Name', 'Is', 'Dinky', 'Technical' ]//replace from curElem[0] to curElem[0].toUppercase
    str =`#${str.join("")}`;   //this join("") means we do not need commas between the words  //MyNameIsDinkyTechnical
      return str;      //#MyNameIsDinkyTechnical        
   }
   
}


console.log(
    generateHash("my name is dinky technical")
)
