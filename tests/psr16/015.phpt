--TEST--
Tests Psr\SimpleCache\CacheInterface::setMultiple method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\SimpleCache\\CacheInterface", "setMultiple");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method setMultiple ] {

  - Parameters [2] {
    Parameter #0 [ <required> $values ]
    Parameter #1 [ <optional> $default ]
  }
}
