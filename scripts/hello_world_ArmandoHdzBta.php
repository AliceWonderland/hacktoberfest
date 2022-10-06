<?php

// LANGUAGE: PHP
// ENV: Core PHP
// AUTHOR: Armando Hernández
// GITHUB: https://github.com/armandohdzbta

class HelloWorld {
    public function helloWorld(){
        return "Hello World";
    }
}

$greet = new HelloWorld;

echo $greet->helloWorld();