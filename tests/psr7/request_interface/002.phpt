--TEST--
Tests Psr\Http\Message\RequestInterface constants
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\RequestInterface");
var_dump($rc->getConstants());
?>
--EXPECT--
array(0) {
}
