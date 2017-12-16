--TEST--
Tests Psr\Http\Message\StreamInterface::read method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\StreamInterface", "read");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method read ] {

  - Parameters [1] {
    Parameter #0 [ <required> $length ]
  }
}
