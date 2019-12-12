#!/bin/bash
#File:lab2_2.sh
echo this is a bash script
date
quota=$(quota -v)
IFS=': ', read -r -a array <<<  "$quota"
echo "you used ${array[1]} of ${array[3]} MB"
