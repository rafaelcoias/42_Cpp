#!/bin/bash

if [[ $# == 0 ]]; then
    echo "Write at least 1 argument" && exit
fi

if [[ $1 == "" ]]; then
    echo "The first argument cannot be empty" && exit
fi

if [[ -f main.cpp ]]; then
    rm -f main.cpp
fi

touch  main.cpp

for ARG in $@; do
    echo "#include \"$ARG.hpp\"" >> main.cpp
done

echo "" >> main.cpp
echo "int main(int argc, char **argv) {" >> main.cpp
echo "  (void)argc;" >> main.cpp
echo "  (void)argv;" >> main.cpp
echo "" >> main.cpp
echo "}" >> main.cpp
