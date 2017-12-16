--TEST--
Tests Psr\Container\ContainerExceptionInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Container\\ContainerExceptionInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(0) {
}
