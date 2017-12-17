--TEST--
Tests Psr\Http\Message\RequestInterface existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
var_dump(interface_exists("Psr\\Http\\Message\\RequestInterface", false));
$rc = new ReflectionClass("Psr\\Http\Message\\RequestInterface");
var_dump($rc->implementsInterface("Psr\Http\\Message\\MessageInterface"));
?>
--EXPECT--
bool(true)
bool(true)
