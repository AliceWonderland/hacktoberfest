var Human = function(name,location){
    //ternary if else
    this.name = (name) ? name : "Rafe";
    this.place = (location) ? location : "Indonesia";
  }
  
  Human.prototype.introduce = function(name){
    name = (name) ? name : this.name;
    var str = "Hello, Nama ku " + name;
    console.log(str + "//Indonesia language");
    return str;
  }
  
  var myself = new Human('MR Sleepppingg','BJM');
  myself.introduce();
  