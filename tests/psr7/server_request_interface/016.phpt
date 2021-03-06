--TEST--
Tests Psr\Http\Message\ServerRequestInterface::withAttribute method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\ServerRequestInterface", "withAttribute");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withAttribute ] {

  - Parameters [2] {
    Parameter #0 [ <required> $name ]
    Parameter #1 [ <required> $value ]
  }
}
