#!/bin/sh

mcss_dir="build/m.css"

if [ ! -d "$mcss_dir" ]; then
    git clone https://github.com/mosra/m.css "$mcss_dir"
else
    echo "build/m.css already exists. Skipping git clone."
fi

python build/m.css/documentation/doxygen.py Doxyfile-mcss

doxygen Doxyfile-uml