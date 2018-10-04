<?php
/**
* LANGUAGE: PHP
* ENV: PHP/Apache/Nginx
* AUTHOR: Akrindev
* GITHUB: https://github.com/akrindev
*/
class Say
{
  protected $hello;
  protected $who;

  public function __construct()
  {
    $this->hello = 'Hello';
  }

  public function helloTo($who = 'World')
  {
    $this->who = $who;

    return $this->hello . ' ' . $this->who;
  }
}

$say = new Say();
echo $say->helloTo('World');

?>