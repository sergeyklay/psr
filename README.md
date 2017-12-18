# PSR

The module implementation for the PSR standards as established by the [PHP-FIG](http://www.php-fig.org) group.

[![Build on Linux](https://travis-ci.org/sergeyklay/psr.svg?branch=master)](https://travis-ci.org/sergeyklay/psr)
[![Build on Windows](https://ci.appveyor.com/api/projects/status/2ml0nybe7lixy7ao/branch/master?svg=true)](https://ci.appveyor.com/project/sergeyklay/psr/branch/master)

Supported PHP versions: **7.0**, **7.1**, **7.2**, **7.3** (nightly)

**NOTE:** The `master` branch will always contain the *latest unstable version*.
If you wish to check older versions or formal, tagged release, please switch to the relevant
[release](https://github.com/sergeyklay/psr/releases)/[tag](https://github.com/sergeyklay/psr/releases).

## Interfaces

* PSR-7: [HTTP message interfaces](http://www.php-fig.org/psr/psr-7)
* PSR-11: [Container interface](http://www.php-fig.org/psr/psr-11)
* PSR-16: [Common Interface for Caching Libraries](http://www.php-fig.org/psr/psr-16)

## Requirements

Prerequisite packages are:

* PHP >= 7.0.0
* PHP development headers and tools
* `gcc` >= 4.4 | `clang` >= 3.x | `vc` >= 11
* GNU `make` >= 3.81
* `automake`
* `autoconf`

You will need PHP development headers.
If PHP was manually installed, these should be available by default.
Otherwise, you will need to fetch them from a repository.

**Note:** the package names may vary.

### Ubuntu and Debian (apt)

```sh
sudo apt-get install build-essential autoconf
sudo apt-get install php7.0-dev
```

### CentOS and RedHat (yum)

```sh
sudo yum groupinstall "Development Tools"
sudo yum install php-devel
```

### Suse (zypper)

```sh
sudo zypper install gcc make automake php7-devel
```

### OS X

By default OS X will be missing command line tools.
On Mavericks (OS X 10.9) and higher those [can be installed without Xcode](http://osxdaily.com/2014/02/12/install-command-line-tools-mac-os-x).

```sh
# install the command line tools, if missing
xcode-select --install
```

The dependencies can be installed through the OS X package manager [Homebrew](http://brew.sh).

```sh
brew update
brew doctor
brew install automake
```

## Installation

### Windows

To install PSR extension on Windows:

1. Download [PSR extension for Windows](https://github.com/sergeyklay/psr/releases/latest)
2. Extract the DLL file and copy it to your PHP extensions directory
3. Edit your php.ini file and add this line:
   ```ini
   extension=php_psr.dll
   ```
4. Finally, restart your web server

**NOTE:** Also you can compile PSR extension yourself. For more see: [README.WIN32-BUILD-SYSTEM](./README.WIN32-BUILD-SYSTEM).

### Linux / macOS

You can install the PSR extension from source.

Building from source is straightforward. Follow these instructions to generate a binary extension for your platform:

```sh
git clone https://github.com/sergeyklay/psr.git
cd psr
phpize
./configure
make
sudo make install
```

If you have specific PHP versions running:

```sh
git clone https://github.com/sergeyklay/psr.git
cd psr
phpize
./configure --with-php-config=/usr/local/bin/php-config
make
sudo make install
```

Add the extension to your **php.ini**:

```ini
extension=psr.so
```

Finally, **restart the web server**.

## License

PSR PHP extension is open source software licensed under the MIT License. See the [LICENSE](./LICENSE) file for more information.


PSR Interfaces: Copyright (c) 2012-present [PHP Framework Interoperability Group](http://www.php-fig.org).
