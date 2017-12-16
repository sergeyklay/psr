--TEST--
Tests Psr\Container\ContainerInterface::get method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Container\\ContainerInterface", "get");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method get ] {

  - Parameters [1] {
    Parameter #0 [ <required> string $id ]
  }
  - Return [ string ]
}
