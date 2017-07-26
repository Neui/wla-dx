Contributing to WLA DX
======================

Bug Reporting
-------------

If you report a bug, please test the latest version first (stable and/or
development).

Also provide a minimal example to recreate the bug, so the bug can be
reproduced easily and be included in the project for testing. (It'll be
placed in the `bug_exhibition` directory)



Coding Style
------------

The code should be compatible with C89/C90 standard. Use 2 spaces for
indention.

The brace style is basically the K&R style, but functions has the `{` on
the same line:

    int main(int argc, char *argv[]) {
        ...
        while (x == y) {
            something();
            somethingelse();

            if (some_error)
                do_correct();
            else
                continue_as_usual();
        }

        finalthing();
        ...
    }

