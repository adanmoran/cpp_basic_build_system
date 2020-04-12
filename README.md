# cpp_basic_build_system
A quick-and-easy build system for simple C++ projects. This includes GTest and
some examples, so that one can get started right away with building and
compiling their library or project.

## Requirements
This library assumes the following is installed:
* CMake >3.5
* g++
* ninja

## Compiling the project
To compile the project, simply run the provided configuration script and then
your generator/compilation tool. For example, if this library is in the path at
"{REPO}", and you are using g++ as a compiler and ninja as your generator, the
command to build is:
```sh
mkdir build && \
cd build && \
{REPO}/scripts/run_cmake_config.sh ${REPO} && \
ninja .
```

One can also input the desired compiler and generator to the script:
```sh
{REPO}/scripts/run_cmake_config.sh ${REPO} ${COMPILER} ${GENERATOR}
```

## Running tests
There are example test suites provided. After compilation, you can run
the `example` and `src/calculator/test/CalcTest` executables to see the
tests running.

## Downloading a basic build system
To run a very basic build system which you can use immediately (with few modifications)
as the start for a new project, check out the `bare_bones` branch. It contains the minimum
structure required of a build system, as well as a distinct README for donwloading the
build code quickly.
