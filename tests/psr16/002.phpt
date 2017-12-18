--TEST--
Tests Psr\SimpleCache\CacheInterface existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php var_dump(interface_exists("Psr\\SimpleCache\\CacheInterface", false)); ?>
--EXPECT--
bool(true)
