--TEST--
Tests Psr\SimpleCache\CacheException existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php var_dump(interface_exists("Psr\\SimpleCache\\CacheException", false)); ?>
--EXPECT--
bool(true)
