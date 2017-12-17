--TEST--
Tests Psr\Http\Message\UploadedFileInterface::getError method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UploadedFileInterface", "getError");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getError ] {

  - Parameters [0] {
  }
}
