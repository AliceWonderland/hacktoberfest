<?php
/**
 * Class Person
 * LANGUAGE: PHP 7
 * AUTHOR: Osayawe Ogbemudia Terry
 * GITHUB: https://github.com/terdia
 */
class Person{

    /** @var string  */
    private $name;
    /** @var string  */
    private $country;

    public function __construct(string $name, string $country)
    {
        $this->name = $name;
        $this->country = $country;
    }

    public function getName(): string
    {
        return $this->name;
    }

    public function getCountry(): string
    {
        return $this->country;
    }

    public function sayHello(): string
    {
        return 'Hello, World!';
    }

    public function greeting(): string 
    {
        return sprintf('%s, my name is %s from %s', $this->sayHello(), $this->getName(), $this->getCountry());
    }
}


$person = new Person('Osayawe Ogbemudia Terry', 'Germany');
echo $person->greeting();
