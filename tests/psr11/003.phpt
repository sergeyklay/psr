--TEST--
Tests Psr\Container\NotFoundExceptionInterface existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
var_dump(interface_exists("Psr\\Container\\NotFoundExceptionInterface", false));
$rc = new ReflectionClass("Psr\\Container\\NotFoundExceptionInterface");
var_dump($rc->implementsInterface("Psr\\Container\\ContainerExceptionInterface"));
?>
--EXPECT--
bool(true)
bool(true)
