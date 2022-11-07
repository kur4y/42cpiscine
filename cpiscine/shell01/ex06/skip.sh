#!/bin/sh
ls -l | awk ' NR%2 {print $0} '
#NR est le num de la ligne
