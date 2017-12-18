--TEST--
Tests Psr\SimpleCache\CacheInterface::deleteMultiple method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\SimpleCache\\CacheInterface", "deleteMultiple");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method deleteMultiple ] {

  - Parameters [1] {
    Parameter #0 [ <required> $keys ]
  }
}
