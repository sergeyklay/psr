--TEST--
Tests Psr\Http\Message\UploadedFileInterface constants
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$rc = new ReflectionClass("Psr\\Http\\Message\\UploadedFileInterface");
var_dump($rc->getConstants());
?>
--EXPECT--
array(0) {
}
