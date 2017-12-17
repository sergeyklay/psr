--TEST--
Tests Psr\Http\Message\ServerRequestInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\ServerRequestInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(30) {
  [0]=>
  object(ReflectionMethod)#2 (2) {
    ["name"]=>
    string(15) "getServerParams"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [1]=>
  object(ReflectionMethod)#3 (2) {
    ["name"]=>
    string(15) "getCookieParams"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [2]=>
  object(ReflectionMethod)#4 (2) {
    ["name"]=>
    string(16) "withCookieParams"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [3]=>
  object(ReflectionMethod)#5 (2) {
    ["name"]=>
    string(14) "getQueryParams"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [4]=>
  object(ReflectionMethod)#6 (2) {
    ["name"]=>
    string(15) "withQueryParams"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [5]=>
  object(ReflectionMethod)#7 (2) {
    ["name"]=>
    string(16) "getUploadedFiles"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [6]=>
  object(ReflectionMethod)#8 (2) {
    ["name"]=>
    string(17) "withUploadedFiles"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [7]=>
  object(ReflectionMethod)#9 (2) {
    ["name"]=>
    string(13) "getParsedBody"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [8]=>
  object(ReflectionMethod)#10 (2) {
    ["name"]=>
    string(14) "withParsedBody"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [9]=>
  object(ReflectionMethod)#11 (2) {
    ["name"]=>
    string(13) "getAttributes"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [10]=>
  object(ReflectionMethod)#12 (2) {
    ["name"]=>
    string(12) "getAttribute"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [11]=>
  object(ReflectionMethod)#13 (2) {
    ["name"]=>
    string(13) "withAttribute"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [12]=>
  object(ReflectionMethod)#14 (2) {
    ["name"]=>
    string(16) "withoutAttribute"
    ["class"]=>
    string(39) "Psr\Http\Message\ServerRequestInterface"
  }
  [13]=>
  object(ReflectionMethod)#15 (2) {
    ["name"]=>
    string(16) "getRequestTarget"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [14]=>
  object(ReflectionMethod)#16 (2) {
    ["name"]=>
    string(17) "withRequestTarget"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [15]=>
  object(ReflectionMethod)#17 (2) {
    ["name"]=>
    string(9) "getMethod"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [16]=>
  object(ReflectionMethod)#18 (2) {
    ["name"]=>
    string(10) "withMethod"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [17]=>
  object(ReflectionMethod)#19 (2) {
    ["name"]=>
    string(6) "getUri"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [18]=>
  object(ReflectionMethod)#20 (2) {
    ["name"]=>
    string(7) "withUri"
    ["class"]=>
    string(33) "Psr\Http\Message\RequestInterface"
  }
  [19]=>
  object(ReflectionMethod)#21 (2) {
    ["name"]=>
    string(18) "getProtocolVersion"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [20]=>
  object(ReflectionMethod)#22 (2) {
    ["name"]=>
    string(19) "withProtocolVersion"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [21]=>
  object(ReflectionMethod)#23 (2) {
    ["name"]=>
    string(10) "getHeaders"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [22]=>
  object(ReflectionMethod)#24 (2) {
    ["name"]=>
    string(9) "hasHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [23]=>
  object(ReflectionMethod)#25 (2) {
    ["name"]=>
    string(9) "getHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [24]=>
  object(ReflectionMethod)#26 (2) {
    ["name"]=>
    string(13) "getHeaderLine"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [25]=>
  object(ReflectionMethod)#27 (2) {
    ["name"]=>
    string(10) "withHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [26]=>
  object(ReflectionMethod)#28 (2) {
    ["name"]=>
    string(15) "withAddedHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [27]=>
  object(ReflectionMethod)#29 (2) {
    ["name"]=>
    string(13) "withoutHeader"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [28]=>
  object(ReflectionMethod)#30 (2) {
    ["name"]=>
    string(7) "getBody"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
  [29]=>
  object(ReflectionMethod)#31 (2) {
    ["name"]=>
    string(8) "withBody"
    ["class"]=>
    string(33) "Psr\Http\Message\MessageInterface"
  }
}
