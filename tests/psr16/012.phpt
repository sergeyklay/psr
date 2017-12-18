--TEST--
Tests Psr\SimpleCache\CacheInterface::delete method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\SimpleCache\\CacheInterface", "delete");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method delete ] {

  - Parameters [1] {
    Parameter #0 [ <required> $key ]
  }
}
