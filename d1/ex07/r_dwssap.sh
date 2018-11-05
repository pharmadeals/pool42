cat /etc/passwd | egrep -v "^#.*" | rev | cut -d: -f 7 | sed -n 'n;p' | sort -fgd | tail -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | xargs | sed 's/ /, /g' | sed 's/$/./' | tr -d '\n'
