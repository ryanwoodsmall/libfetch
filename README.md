# libfetch

_extremely_ hacked up libfetch from FreeBSD, for Linux.

**DO NOT USE THIS**

i have done _bad_ things to ftp, mostly because i've not done any socket programming in a couple of decades.

trying to get a base for opengit: https://github.com/khanzf/opengit

patch/build script, segfaulting but builds now: https://gist.github.com/ryanwoodsmall/2cbce4664f13b95ec7b0385fcee0b957

## sources

- fetch from freebsd:
  - https://github.com/freebsd/freebsd/tree/master/lib/libfetch
- old alpine package:
  - APKBUILD: https://git.alpinelinux.org/aports/tree/main/libfetch/APKBUILD?h=3.3-stable
  - Makefile: https://git.alpinelinux.org/aports/tree/main/libfetch/Makefile?h=3.3-stable
