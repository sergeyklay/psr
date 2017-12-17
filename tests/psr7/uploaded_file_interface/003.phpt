--TEST--
Tests Psr\Http\Message\UploadedFileInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\UploadedFileInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(6) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(9) "getStream"
    ["class"]=>
    string(38) "Psr\Http\Message\UploadedFileInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(6) "moveTo"
    ["class"]=>
    string(38) "Psr\Http\Message\UploadedFileInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(7) "getSize"
    ["class"]=>
    string(38) "Psr\Http\Message\UploadedFileInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(8) "getError"
    ["class"]=>
    string(38) "Psr\Http\Message\UploadedFileInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(17) "getClientFilename"
    ["class"]=>
    string(38) "Psr\Http\Message\UploadedFileInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(18) "getClientMediaType"
    ["class"]=>
    string(38) "Psr\Http\Message\UploadedFileInterface"
  }
}
