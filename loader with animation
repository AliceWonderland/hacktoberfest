<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=\, initial-scale=1.0">
    <title>Document</title>
    <style>
    *{
        margin:0% ;
         padding: 0%;
        box-sizing: border-box;}
         body{
            height: 100vh;
            display: grid;
            place-items: center;
            background-color: black;
         }
         .loader{
            width: 150px;
            aspect-ratio: 1;
            border-radius: 50%;
            background-color: blueviolet;
            position: relative;
            animation: circleloader 1s linear infinite reverse;


         }
         @keyframes circleloader {
            100%{
                rotate: 360deg;
            }
         }
.loader::before{
    content: "";
    position: absolute;
    top: 0;
    left: 0;
    width: 120px;
   aspect-ratio: 1;
    border-radius: 50%;
background-color: black;
}
.loader::after{
    content: "";
    position: absolute;
    top: -18px;
    left: 44px;
    width: 40px;
   aspect-ratio: 1;
    border-radius: 50%;
background-color: blueviolet;
box-shadow: 0 0 10px blueviolet, 0 0 15px blueviolet, 0 0 20px blueviolet, 0 0 25px blueviolet ;
}
    </style>
</head>
<body>
    <div class="loader"></div>
</body>
</html>
