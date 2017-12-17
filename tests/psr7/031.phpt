--TEST--
Tests Psr\Http\Message\MessageInterface::withBody method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\MessageInterface", "withBody");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withBody ] {

  - Parameters [1] {
    Parameter #0 [ <required> Psr\Http\Message\StreamInterface $body ]
  }
}
