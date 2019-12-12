#!/bin/bash
#File:lab2_1.sh
echo this is a bash script
date

read -p "Please input the 2 dates in the form month1 year1 month2 year2:" month1 year1 month2 year2

if [[ $year1 -lt 0 || $year2 -lt 0 || $month1 -lt 0 || $month2 -lt 0 ]] 
then
	echo No negative number please
elif [ $year1 -eq 0 -o $year2 -eq 0 -o $month1 -eq 0 -o $month2 -eq 0 ] 
then
	echo Wrong month format

elif [ $month1 -gt 12 -o $month2 -gt 12 ] 
then
	echo Wrong month format
elif [ $(($year1+$month1-$year2-$month2)) -gt 0 -a $year1 -ge $year2 ]
then
	echo date 1 is greater than date 2
	read -p "Please input the 2 dates in the form month1 year1 month2 year2:" month1 year1 month2 year2
elif [ $month2 -gt $month1 ]
then
	month=$(($month2-$month1))
	year=$(($year2-$year1))
	echo "$year years and $month months"

else
	month=$((12-$month1+$month2))
	year=$(($year2-$year1-1))
	echo "$year years and $month months"
fi


