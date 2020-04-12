# cpp_basic_build_system
A quick-and-easy build system for simple C++ projects. This includes GTest and
some examples, so that one can get started right away with building and
compiling their library or project.

## Requirements
This library assumes the following is installed:
* CMake >3.5
* g++
* ninja

## Downloading bare_bones
To get the ultimate bare bones build system which you can immediately use to start
writing code *without cloning this whole git repository*, you can simply use the
command
```sh
git clone --depth=1 --branch=bare_bones git://github.com/adanmoran/cpp_basic_build_system dirforcode
rm -rf dirforcode/.git
```
The `--depth=1` removes most of the git history from this repository, while `--branch=bare_bones` keeps only
the minimum data you need to start a build system. The folder your new build system is saved into
is `dirforcode`, which will no longer be a git repository after you call `rm -rf dirforcode/.git`.

## Compiling the project
To compile the project, simply run the provided configuration script and then
your generator/compilation tool. For example, if this library is in the path at
and you are using g++ as a compiler and ninja as your generator, the
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
Tests are stored in the build system after compilation. You can either run
`ninja test` to run all tests, or run the tests individually by finding their
executable in the build folder.
