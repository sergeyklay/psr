--TEST--
Tests Psr\Container\NotFoundExceptionInterface methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Container\\NotFoundExceptionInterface");
var_dump($rc->getMethods());
?>
--EXPECT--
array(0) {
}
