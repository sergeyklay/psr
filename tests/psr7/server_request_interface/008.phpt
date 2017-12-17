--TEST--
Tests Psr\Http\Message\ServerRequestInterface::withQueryParams method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\ServerRequestInterface", "withQueryParams");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withQueryParams ] {

  - Parameters [1] {
    Parameter #0 [ <required> array $query ]
  }
}
