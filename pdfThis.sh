find . -name "*.cc" -o -name "*.h" -o -name "*.ih" | xargs enscript -C -Ecpp -fCourier8 --color=1 --header='$n' --media=A4 -o - | ps2pdf - code.pdf
