--TEST--
Tests Psr\Http\Message\StreamInterface::getMetadata method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\StreamInterface", "getMetadata");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getMetadata ] {

  - Parameters [1] {
    Parameter #0 [ <optional> $key ]
  }
}
