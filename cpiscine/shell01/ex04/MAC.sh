#!/bin/sh
ifconfig | grep ether | tr -s ' ' '?' | awk -F'?' '{print $3}' | uniq
