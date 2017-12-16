--TEST--
Tests Psr\Http\Message\UriInterface::withScheme method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UriInterface", "withScheme");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withScheme ] {

  - Parameters [1] {
    Parameter #0 [ <required> string $scheme ]
  }
  - Return [ Psr\Http\Message\UriInterface ]
}
