function myDisplayer(some) {
    document.getElementById("demo").innerHTML = some;
  } 
  let myPromise = new Promise(function(myResolve, myReject) {
    let x = 0;
    if (x == 0) {
      myResolve("OK");
    } else {
      myReject("Error");
    }
  });
  
  myPromise.then(
    function(value) {myDisplayer(value);},
    function(error) {myDisplayer(error);}
  );