--TEST--
Tests Psr\Http\Message\UriInterface::withHost method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UriInterface", "withHost");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withHost ] {

  - Parameters [1] {
    Parameter #0 [ <required> string $host ]
  }
  - Return [ "Psr\\Http\\Message\\UriInterface" ]
}
