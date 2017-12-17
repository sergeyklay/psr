--TEST--
Tests Psr\Http\Message\ServerRequestInterface existentce
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php var_dump(interface_exists("Psr\\Http\\Message\\ServerRequestInterface", false)); ?>
--EXPECT--
bool(true)
