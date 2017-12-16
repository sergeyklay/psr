--TEST--
Tests Psr\Http\Message\UriInterface::withUserInfo method
--SKIPIF--
<?php if (!extension_loaded("psr")) print "skip The psr extension is not loaded"; ?>
--FILE--
<?php
$method = new ReflectionMethod("Psr\\Http\\Message\\UriInterface", "withUserInfo");
echo $method->__toString(), PHP_EOL;
?>
--EXPECT--
Method [ <internal:psr> abstract public method withUserInfo ] {

  - Parameters [2] {
    Parameter #0 [ <required> string $user ]
    Parameter #1 [ <optional> string or NULL $password ]
  }
  - Return [ Psr\Http\Message\UriInterface ]
}
