--TEST--
Tests Psr\Http\Message\UriInterface::withPort method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UriInterface", "withPort");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withPort ] {

  - Parameters [1] {
    Parameter #0 [ <required> integer or NULL $port ]
  }
  - Return [ Psr\Http\Message\UriInterface ]
}
