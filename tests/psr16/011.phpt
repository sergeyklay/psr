--TEST--
Tests Psr\SimpleCache\CacheInterface::set method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\SimpleCache\\CacheInterface", "set");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method set ] {

  - Parameters [3] {
    Parameter #0 [ <required> $key ]
    Parameter #1 [ <required> $value ]
    Parameter #2 [ <optional> $ttl ]
  }
}
