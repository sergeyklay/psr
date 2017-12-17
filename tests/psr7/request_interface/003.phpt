--TEST--
Tests Psr\Http\Message\RequestInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\RequestInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(17) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(16) "getRequestTarget"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(17) "withRequestTarget"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(9) "getMethod"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(10) "withMethod"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(6) "getUri"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(7) "withUri"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [6]=>
  object(ReflectionMethod)#8 (2) {
    ["name"]=>
    string(18) "getProtocolVersion"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [7]=>
  object(ReflectionMethod)#9 (2) {
    ["name"]=>
    string(19) "withProtocolVersion"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [8]=>
  object(ReflectionMethod)#10 (2) {
    ["name"]=>
    string(10) "getHeaders"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [9]=>
  object(ReflectionMethod)#11 (2) {
    ["name"]=>
    string(9) "hasHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [10]=>
  object(ReflectionMethod)#12 (2) {
    ["name"]=>
    string(9) "getHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [11]=>
  object(ReflectionMethod)#13 (2) {
    ["name"]=>
    string(13) "getHeaderLine"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [12]=>
  object(ReflectionMethod)#14 (2) {
    ["name"]=>
    string(10) "withHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [13]=>
  object(ReflectionMethod)#15 (2) {
    ["name"]=>
    string(15) "withAddedHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [14]=>
  object(ReflectionMethod)#16 (2) {
    ["name"]=>
    string(13) "withoutHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [15]=>
  object(ReflectionMethod)#17 (2) {
    ["name"]=>
    string(7) "getBody"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [16]=>
  object(ReflectionMethod)#18 (2) {
    ["name"]=>
    string(8) "withBody"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
}
