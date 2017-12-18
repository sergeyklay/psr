--TEST--
Tests Psr\SimpleCache\CacheException methods
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\SimpleCache\\CacheException");
var_dump($rc->getMethods());
?>
--EXPECT--
array(0) {
}
