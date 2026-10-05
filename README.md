# CS-330-Lab-4

Assignment 4 is in `asgn4.c`, with the bit functions in `asgn4.h`. Run these commands from the repository folder in the Codespace terminal.

## Compile and run with the Makefile

```sh
make build
make run
```

`make build` creates the `asgn4` executable. `make run` runs it. You can also run the executable directly with `./asgn4` after compiling.

## Compile and run without the Makefile

```sh
gcc -Wall -g asgn4.c -o asgn4 -lm -fno-pie -no-pie
./asgn4
```

`asgn4.h` is included by `asgn4.c`, so it does not need a separate compile command.
