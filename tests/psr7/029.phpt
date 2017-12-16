--TEST--
Tests Psr\Http\Message\UriInterface::getFragment method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UriInterface", "getFragment");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method getFragment ] {

  - Parameters [0] {
  }
  - Return [ string ]
}
