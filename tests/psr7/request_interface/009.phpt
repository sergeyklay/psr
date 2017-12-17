--TEST--
Tests Psr\Http\Message\RequestInterface::withUri method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\RequestInterface", "withUri");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withUri ] {

  - Parameters [2] {
    Parameter #0 [ <required> Psr\Http\Message\UriInterface $uri ]
    Parameter #1 [ <optional> $preserveHost ]
  }
}
