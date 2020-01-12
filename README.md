# cpp_basic_build_system
A quick-and-easy build system for simple C++ projects. This includes GTest and
some examples, so that one can get started right away with building and
compiling their library or project.

To compile the project, simply run the cmake script. If this library is in the
path at "{REPO}", then:
```sh
mkdir build &&
cd build &&
{REPO}/scripts/run_cmake_config.sh ${REPO} 
```
One can also input the desired compiler and generator:
```sh
{REPO}/scripts/run_cmake_config.sh ${REPO} ${COMPILER} ${GENERATOR}
```
The default compiler is g++, and the default generator is Ninja.
