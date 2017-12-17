--TEST--
Tests Psr\Http\Message\MessageInterface::getHeaders method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\MessageInterface", "getHeaders");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getHeaders ] {

  - Parameters [0] {
  }
}
