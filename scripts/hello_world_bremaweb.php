<?php

$hello = new HelloWorld();

echo $hello->world() . "\r\n\r\n";

class HelloWorld {
    private $_phrase;
    
    function __construct(){
        $this->_phrase = 'Hello World!';
    }

    function world(){
        return $this->_phrase;
    }
}
