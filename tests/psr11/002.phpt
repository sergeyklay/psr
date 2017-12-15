--TEST--
Tests Psr\Container\ContainerExceptionInterface existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php var_dump(interface_exists("Psr\\Container\\ContainerExceptionInterface", false)); ?>
--EXPECT--
bool(true)
