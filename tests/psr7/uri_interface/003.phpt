--TEST--
Tests Psr\Http\Message\UriInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\UriInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(16) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(9) "getScheme"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(12) "getAuthority"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(11) "getUserInfo"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(7) "getHost"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(7) "getPort"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(7) "getPath"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [6]=>
  object(ReflectionMethod)#8 (2) {
    ["name"]=>
    string(8) "getQuery"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [7]=>
  object(ReflectionMethod)#9 (2) {
    ["name"]=>
    string(11) "getFragment"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [8]=>
  object(ReflectionMethod)#10 (2) {
    ["name"]=>
    string(10) "withScheme"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [9]=>
  object(ReflectionMethod)#11 (2) {
    ["name"]=>
    string(12) "withUserInfo"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [10]=>
  object(ReflectionMethod)#12 (2) {
    ["name"]=>
    string(8) "withHost"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [11]=>
  object(ReflectionMethod)#13 (2) {
    ["name"]=>
    string(8) "withPort"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [12]=>
  object(ReflectionMethod)#14 (2) {
    ["name"]=>
    string(8) "withPath"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [13]=>
  object(ReflectionMethod)#15 (2) {
    ["name"]=>
    string(9) "withQuery"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [14]=>
  object(ReflectionMethod)#16 (2) {
    ["name"]=>
    string(12) "withFragment"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
  [15]=>
  object(ReflectionMethod)#17 (2) {
    ["name"]=>
    string(10) "__toString"
    ["class"]=>
    string(29) "Psr\Http\Message\UriInterface"
  }
}
