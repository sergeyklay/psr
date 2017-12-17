--TEST--
Tests Psr\Http\Message\MessageInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\MessageInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(11) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(18) "getProtocolVersion"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(19) "withProtocolVersion"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(10) "getHeaders"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(9) "hasHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(9) "getHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(13) "getHeaderLine"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [6]=>
  object(ReflectionMethod)#8 (2) {
    ["name"]=>
    string(10) "withHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [7]=>
  object(ReflectionMethod)#9 (2) {
    ["name"]=>
    string(15) "withAddedHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [8]=>
  object(ReflectionMethod)#10 (2) {
    ["name"]=>
    string(13) "withoutHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [9]=>
  object(ReflectionMethod)#11 (2) {
    ["name"]=>
    string(7) "getBody"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [10]=>
  object(ReflectionMethod)#12 (2) {
    ["name"]=>
    string(8) "withBody"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
}
