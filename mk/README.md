Legacy Makefiles
================

These are ready-to-use makefiles for building without configuring first.
Note that these makefiles aren't fully featured as the current build system
(generator) and should rather be used if CMake isn't available.

Use `make -f mk/SOMEFILE.mk` to run your Makefile or copy it to `Makefile`
and run `make` normally. Make sure you run `make` inside the root directory
of this project (the parent directory of this `mk` directory).

Note that different make implementations might be different. For example, for
Microsofts NMake you need need to use `nmake /f mk/SOMEFILE.mk`.

The binaries are being generated in the `binaries` folder.

It only builds the binaries, it can't install stuff nor does it generate
the documentation or any version info.



Files
-----

* `gen_mk.sh` - This script generates an makefile. See "Generating" for more info
* `generate.sh` - This script generates makefiles from templates
  Run it once for more information.
* `posix.mk` - A makefile that should work on POSIX-compatible systems and tools.
* `gcc.mk` - Like `posix.mk`, but uses gcc (and clang) specific stuff
* `mingw.mk` - Like `gcc.mk`, but uses Windows-specific defines and tools.
  Note that your GCC name might be different. Append `GCC=mingw32-gcc` or
  similar to the make innovation. Also the make tool is probably called
  `mingw32-make`.
* `win32cl.mk` - For Microsofts (and clang) CL compiler; Also make sure to
  use NMake and use it inside the "Developer Command Prompt" (or
  "Native Tools Command Prompt") from Visual Studio to be able to access the
  tools you need.
* `dosdjgpp.mk` - Like `mingw.mk`, but make binaries for dos on dos using
  [DJGPP-GCC](http://www.delorie.com/djgpp/). Note that you also need Long
  FileName support (usually `doslfn`). Also make sure to read DJGPP installing
  instructions if you get a crash in DJGPP-GCC, because you need to set some
  variables. Also prepare to wait for it to compile.
* `amiga_gcc.mk` - Like `gcc.mk`, but for amiga systems (usually AmigaOS4).


Targets
-------

The following targets are available:

* `all` - Builds everything (the default one)
* `wlalink` - Builds `wlalink`
* `clean-wlalink` - Clean `wlalink` and related object files
* `wlab` - Builds `wlab`
* `clean-wlab` - Clean `wlab` and related object files
* `wla-TARGET` - Builds `wla-TARGET` where `TARGET` is the target arch.
* `clean-wla-TARGET` - Clean `wla-TARGET` and related object files (see above)
* `clean` - Cleans everything
* `clean-objects` - Clean only objects, useful when you want to keep the binaries
* `generators` - Only build `gen-TARGET` (useful for cross compiling)

### Additional variables

Add `DEBUGFLAGS=` to the end of the `make` commandline to make a debug build.
Make sure to clean it first.


Crosscompiling
--------------

This doesn't support crosscompiling. The main issue is that some defines are
bound to the system they've been generated for. So trying to cross-compile
probably would use the wrong defines.


Generating
----------

Since the scripts are written in POSIX sh, you need a compatible shell and
environment.

Run `generate.sh all` to generate all makefiles. The repository comes with
pre-generated makefiles for ease of use. Run this when you've changed the
configuration or modified the `gen_mk.sh` script.

Run `gen_mk.sh` generates one makefile and prints it to `stdout`. You can
change it's behavior by calling it with certain environment variables.
See it's header for what environment variables it accepts and for what it is
being used.


