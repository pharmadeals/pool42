echo $FT_NBR1 + $FT_NBR2 | sed "s/\'/0/g" | tr 'mrdoc' '01234' | tr '\'\\\"\?\!\' '1234' | xargs echo "ibase=5; obase=23;" | bc | tr '0123456789ABC' 'gtaio luSnemf'
