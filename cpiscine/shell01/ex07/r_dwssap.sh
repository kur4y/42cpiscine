#!/bin/sh
cat /etc/passwd | grep -vE '^#' | awk '!(NR%2){print $1}' FS=";"| rev | sort -r | awk 'NR>='$FT_LINE1' && NR<='$FT_LINE2' {print $0}' | sed -z '{s/\n/, /g;s/, $/./}'
