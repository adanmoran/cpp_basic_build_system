# Inputs from shell script
SRC="$1"

if [ -n "$2" ] ; then
    COMPILER="$2"
else
    echo "CMake will generate compiler options for g++"
    COMPILER=g++
fi

# Global variables
if [ -n "$3" ]; then
    GENERATOR="$3"
else
    echo "CMake will use Ninja as a generator"
    GENERATOR=Ninja
fi

# Run CMake to configure the project
cmake -DCMAKE_CXX_COMPILER=$COMPILER -G$GENERATOR $SRC

# vim: set ts=4 sw=4 et :
