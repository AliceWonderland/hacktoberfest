<?php

class HelloWorld
{
 
  private $message;
 
  public function  __construct($message)
  {
    $this->message = $message;
  }
 
  public function sayHello() 
  {
    echo $this->message;
  }
 
};

$hello = new HelloWorld("Hello World!");

$hello->sayHello();
