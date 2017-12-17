--TEST--
Tests Psr\Http\Message\RequestInterface::withMethod method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\RequestInterface", "withMethod");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withMethod ] {

  - Parameters [1] {
    Parameter #0 [ <required> $method ]
  }
}
