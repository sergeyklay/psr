--TEST--
Tests Psr\Http\Message\MessageInterface::withHeader method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\MessageInterface", "withHeader");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withHeader ] {

  - Parameters [2] {
    Parameter #0 [ <required> $name ]
    Parameter #1 [ <required> $value ]
  }
}
