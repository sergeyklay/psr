--TEST--
Tests Psr\Http\Message\UriInterface::getScheme method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UriInterface", "getScheme");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getScheme ] {

  - Parameters [0] {
  }
}
