--TEST--
Tests Psr\Http\Message\RequestInterface parents
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\Message\\RequestInterface");
var_dump($rc->implementsInterface("Psr\Http\\Message\\MessageInterface"));
?>
--EXPECT--
bool(true)
