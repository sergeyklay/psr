--TEST--
Tests Psr\SimpleCache\CacheInterface::getMultiple method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\SimpleCache\\CacheInterface", "getMultiple");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getMultiple ] {

  - Parameters [2] {
    Parameter #0 [ <required> $keys ]
    Parameter #1 [ <optional> $default ]
  }
}
