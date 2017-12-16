# PSR

The module implementation for the PSR standards as established by the [PHP-FIG](http://www.php-fig.org/) group.

[![Build on Linux](https://travis-ci.org/sergeyklay/psr.svg?branch=master)](https://travis-ci.org/sergeyklay/psr)

## Interfaces

* PSR-11: [Container interface](http://www.php-fig.org/psr/psr-11/)

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

**Note:** the package name may vary.

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
On Mavericks (OS X 10.9) and higher those [can be installed without Xcode](http://osxdaily.com/2014/02/12/install-command-line-tools-mac-os-x/).

```sh
# install the command line tools, if missing
xcode-select --install
```

The dependencies can be installed through the OS X package manager [Homebrew](http://brew.sh/).

```sh
brew update
brew doctor
brew install automake
```

## Installation

**NOTE:** If you wish to check older versions or formal, tagged release, please switch to the relevant
[release](https://github.com/sergeyklay/psr/releases)/[tag](https://github.com/sergeyklay/psr/releases).

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

If you have specific php versions running:

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

This project is open source software licensed under the MIT License. See the [LICENSE](./LICENSE) file for more information.
