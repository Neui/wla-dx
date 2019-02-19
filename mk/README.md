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


