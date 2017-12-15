--TEST--
Tests Psr\Container\ContainerInterface existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php var_dump(interface_exists("Psr\\Container\\ContainerInterface", false)); ?>
--EXPECT--
bool(true)
