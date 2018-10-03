#!/bin/bash
find . -name "*.cc" -o -name "*.h" -o -name "*.ih" | xargs enscript -C -z -fCourier8 --header='$dir' --media=A4 -o - | ps2pdf - code.pdf
