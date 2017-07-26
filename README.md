wla-dx
======

WLA DX - Yet Another
GB-Z80/Z80/6502/65C02/6510/65816/HUC6280/SPC-700
Multi Platform Cross Assembler Package

WLA DX is a set of tools to assemble assembly files to object or library files
(`wla-ARCH`) and linking them together (`wlalink`). WLA DX isn't bound to one
system (eg. NES or C64), but rather WLA DX allows you to define your own
memory map (that should be shared across all object and library files).

Supported architectures are:

* z80
* gb (z80-gb)
* 6502
* 65c02
* 6510
* 65816
* huc6580
* spc700



Installing
==========

Compiling
---------

See `INSTALL.md` for more detailed instructions.

You need:

* CMake (at least v2.8.9)
* C compiler
* Sphinx (optional, min. v1.2.0, v1.6.0 recommended) (to generate docs)

1. Clone the repository: `git clone https://github.com/vhelin/wla-dx`
2. Open the terminal inside the repository folder: `cd wla-dx`
3. Make building directory: `mkdir build && cd build`
4. Generate CMake files: `cmake ..`
5. Build: `cmake --build . --config Release`
6. (Optional) Install: `cmake -P cmake_install.cmake`

If you didn't installed it, you can still access the binaries in the `binaries`
folder. It also contains the compiled documentation in the subfolder `doc`.



Usage
=====

Use the [documentation](https://wla-dx.readthedocs.io/en/latest/) as a staring
point.



Contributing
============

See `CONTRIBUTING.md` for information about the coding style and fixing bugs.


Community
---------

If GitHub isn't a community for you, you might want to visit an unofficial
IRC channel, such as
[`##wla-dx`][irc-fn] on [freenode.net][fn] ([Webchat][fn-webchat])
or
[`#wla-dx`][irc-oftc] on [oftc.net][oftc] ([Webchat][oftc-webchat]).

[irc-fn]: irc://chat.freenode.net/##wla-dx
[irc-oftc]: irc://irc.oftc.net/#wla-dx
[fn]: https://freenode.net/
[fn-webchat]: https://webchat.freenode.net?channels=%23%23wla-dx
[oftc]: https://oftc.net/
[oftc-webchat]: https://webchat.oftc.net/?channels=wla-dx

