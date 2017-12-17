--TEST--
Tests Psr\Http\Message\ResponseInterface::withStatus method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\ResponseInterface", "withStatus");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withStatus ] {

  - Parameters [2] {
    Parameter #0 [ <required> $code ]
    Parameter #1 [ <optional> $reasonPhrase ]
  }
}
