#!/bin/sh
find . -name '*.sh' -type f | cut -d '.' -f2 | tr -s '/' ' ' | awk '{print $NF}'
# $NF = derniere collone d un fichier meme si nb colonne !=
# find . -name '*.sh' -printf "%f\n" | cut -d . -f 1
