#!/bin/sh
cat /etc/passwd | sed "/#/d" | sed -n '2,${p;n;}' | cut -d ":" -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed "s/,/, /g" | rev | sed "s/ ,/./" | rev | tr -d "\n"