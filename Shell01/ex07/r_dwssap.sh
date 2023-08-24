#!/bin/bash
cat /etc/passwd | grep -v '#' | awk -F ":" 'NR %2 == 0 {print $1}' | rev | sort -r | awk 'NR==ENVIRON["FT_LINE1"], NR==ENVIRON["FT_LINE2"]' | paste -sd ", *" | tr ',' ', ' | tr '\n' '.'