// LANGUAGE: PHP
// AUTHOR: Andy Nur
// GITHUB: https://github.com/andynur

// This hello world uses simple PHP Function.

// PHP Function
function greeting($name) {
    $str = "Hello, World! by " . $name;
    return $str;            
}

$result = greeting('Andy Nur');
echo $result;