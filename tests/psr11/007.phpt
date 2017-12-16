--TEST--
Tests Psr\Container\ContainerInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Container\\ContainerInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(2) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(3) "get"
    ["class"]=>
    string(32) "Psr\Container\ContainerInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(3) "has"
    ["class"]=>
    string(32) "Psr\Container\ContainerInterface"
  }
}
