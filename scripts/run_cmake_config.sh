# Inputs from shell script
if [ -n "$1" ] ; then
    SRC="$1"
else
    echo "Setting source folder to ~/qsat"
    SRC=~/qsat
fi

if [ -n "$2" ] ; then
    COMPILER="$2"
else
    echo "CMake will generate compiler options for g++"
    COMPILER=g++
fi

# Global variables
GENERATOR=Ninja

# Run CMake to configure the 
cmake -DCMAKE_CXX_COMPILER=$COMPILER -G$GENERATOR $SRC

# vim: set ts=4 sw=4 et :
