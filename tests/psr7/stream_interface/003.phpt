--TEST--
Tests Psr\Http\Message\StreamInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\StreamInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(15) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(5) "close"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(6) "detach"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(7) "getSize"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(4) "tell"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(3) "eof"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(10) "isSeekable"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [6]=>
  object(ReflectionMethod)#8 (2) {
    ["name"]=>
    string(4) "seek"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [7]=>
  object(ReflectionMethod)#9 (2) {
    ["name"]=>
    string(6) "rewind"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [8]=>
  object(ReflectionMethod)#10 (2) {
    ["name"]=>
    string(10) "isWritable"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [9]=>
  object(ReflectionMethod)#11 (2) {
    ["name"]=>
    string(5) "write"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [10]=>
  object(ReflectionMethod)#12 (2) {
    ["name"]=>
    string(10) "isReadable"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [11]=>
  object(ReflectionMethod)#13 (2) {
    ["name"]=>
    string(4) "read"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [12]=>
  object(ReflectionMethod)#14 (2) {
    ["name"]=>
    string(11) "getContents"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [13]=>
  object(ReflectionMethod)#15 (2) {
    ["name"]=>
    string(11) "getMetadata"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
  [14]=>
  object(ReflectionMethod)#16 (2) {
    ["name"]=>
    string(10) "__toString"
    ["class"]=>
    string(32) "Psr\Http\Message\StreamInterface"
  }
}
