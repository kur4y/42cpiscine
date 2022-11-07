#!/bin/sh
find . -name '*[^~$]' -type f,d | wc -l
