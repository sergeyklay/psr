--TEST--
Tests Psr\Container\ContainerInterface constants
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Container\\ContainerInterface");
var_dump($rc->getConstants());
?>
--EXPECT--
array(0) {
}
