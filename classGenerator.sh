#!/bin/bash

if [[ $# == 0 ]]; then
    echo "write at least 1 argument" && exit
fi

if [[ $1 == "" ]]; then
    echo "the first argument cannot be empty" && exit
fi

if [[ $1 == "-help" ]]; then
    echo "arg1 -> class name"
    echo "arg2 -> \"atribute_type-atribute_name\""
    echo "..."
    echo "argX -> \"atribute_type-atribute_name\""
    exit
fi

className=$1
fileHpp=$1.hpp
fileCpp=$1.cpp
upper_class=$(echo $1 | tr '[:lower:]' '[:upper:]')

if [[ -f $fileHpp ]]; then
    rm -f $fileHpp
fi

if [[ -f $fileCpp ]]; then
    rm -f $fileCpp
fi

touch $fileHpp
touch $fileCpp

#   HPP FILE

echo "#ifndef ${upper_class}_HPP" >> $fileHpp
echo "# define ${upper_class}_HPP" >> $fileHpp
echo "" >> $fileHpp
echo "# include <string>" >> $fileHpp
echo "# include <iostream>" >> $fileHpp
echo "" >> $fileHpp
echo "class $1 {" >> $fileHpp
echo "  private:" >> $fileHpp

shift

# PRIVATE ATRIBUTS

for ARG in $@; do
    TYPE=$(echo $ARG | cut -d ':' -f1)
    NAME=$(echo $ARG | cut -d ':' -f2)
    echo "      $TYPE   $NAME;" >> $fileHpp
done

# PUBLIC FUNCTIONS

echo "" >> $fileHpp
echo "  public:" >> $fileHpp
echo "      $className();" >> $fileHpp
echo -n "      $className(" >> $fileHpp

# CONSTRUCTOR W/ ALL ATRIBUTS

for ARG in $@; do
    TYPE=$(echo $ARG | cut -d ':' -f1)
    NAME=$(echo $ARG | cut -d ':' -f2)
    echo -n "$TYPE $NAME" >> $fileHpp
    LASTARG="${*: -1:1}"
    if [ $ARG != $LASTARG ]; then
        echo -n ", " >> $fileHpp
    fi
done

echo ");" >> $fileHpp
echo "      ~$className();" >> $fileHpp
echo "" >> $fileHpp

# GET AND SET FUNCTIONS

for ARG in $@; do
    TYPE=$(echo $ARG | cut -d ':' -f1)
    NAME=$(echo $ARG | cut -d ':' -f2)
    echo "      $TYPE  get${NAME^}(void);" >> $fileHpp
    echo "      void  set${NAME^}($TYPE $NAME);" >> $fileHpp
done

echo "};" >> $fileHpp
echo "" >> $fileHpp
echo "#endif" >> $fileHpp

#   CPP FILE

# CONSTRUCTORS

echo "#include \"$fileHpp\"" >> $fileCpp
echo "" >> $fileCpp
echo "$className::$className() {}" >> $fileCpp
echo "" >> $fileCpp

# CONSTRUCTORS W/ ALL ATRIBUTS

echo -n "$className::$className(" >> $fileCpp

for ARG in $@; do
    TYPE=$(echo $ARG | cut -d ':' -f1)
    NAME=$(echo $ARG | cut -d ':' -f2)
    echo -n "$TYPE $NAME" >> $fileCpp
    LASTARG="${*: -1:1}"
    if [ $ARG != $LASTARG ]; then
        echo -n ", " >> $fileCpp
    fi
done

echo ") {" >> $fileCpp
for ARG in $@; do
    NAME=$(echo $ARG | cut -d ':' -f2)
    echo "  this->$NAME = $NAME;" >> $fileCpp
done

echo "}" >> $fileCpp
echo "" >> $fileCpp

# DECONSTRUCTOR

echo "$className::~$className() {}" >> $fileCpp
echo "" >> $fileCpp

# GET AND SET FUNCTIONS

for ARG in $@; do
    TYPE=$(echo $ARG | cut -d ':' -f1)
    NAME=$(echo $ARG | cut -d ':' -f2)
    echo "$TYPE $className::get${NAME^}(void) {" >> $fileCpp
    echo "  return (this->$NAME);" >> $fileCpp
    echo "}" >> $fileCpp
    echo "" >> $fileCpp
    echo "void $className::set${NAME^}($TYPE $NAME) {" >> $fileCpp
    echo "  this->$NAME = $NAME;" >> $fileCpp
    echo "}" >> $fileCpp
    echo "" >> $fileCpp
done
