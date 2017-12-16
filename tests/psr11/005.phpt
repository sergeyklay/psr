--TEST--
Tests Psr\Container\ContainerExceptionInterface constants
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Container\\ContainerExceptionInterface");
var_dump($rc->getConstants());
?>
--EXPECT--
array(0) {
}
