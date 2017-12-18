--TEST--
Tests Psr\SimpleCache\InvalidArgumentException existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php var_dump(interface_exists("Psr\\SimpleCache\\InvalidArgumentException", false));
$rc = new ReflectionClass("Psr\\SimpleCache\\InvalidArgumentException");
var_dump($rc->implementsInterface("Psr\\SimpleCache\\CacheException")); ?>
--EXPECT--
bool(true)
bool(true)
