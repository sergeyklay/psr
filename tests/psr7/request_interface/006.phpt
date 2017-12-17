--TEST--
Tests Psr\Http\Message\RequestInterface::getMethod method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\RequestInterface", "getMethod");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getMethod ] {

  - Parameters [0] {
  }
}
