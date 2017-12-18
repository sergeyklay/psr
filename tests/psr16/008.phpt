--TEST--
Tests Psr\SimpleCache\CacheInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\SimpleCache\\CacheInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(8) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(3) "get"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(3) "set"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(6) "delete"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(5) "clear"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(11) "getMultiple"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(11) "setMultiple"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [6]=>
  object(ReflectionMethod)#8 (2) {
    ["name"]=>
    string(14) "deleteMultiple"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
  [7]=>
  object(ReflectionMethod)#9 (2) {
    ["name"]=>
    string(3) "has"
    ["class"]=>
    string(30) "Psr\SimpleCache\CacheInterface"
  }
}
