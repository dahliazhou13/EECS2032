#!/bin/bash
#File: lab3_2.sh
echo this is a bash script
date

if [ ! -e $1 -o ! -e $2 ]
then
	echo file does not exist
	exit
fi

y=0
while read x1 x2 x3
do
	if [[ $3 == $x3 ]]
	then
		id=$x3
		firstname=$x1
		lastname=$x2
		y=1
	fi	
done < "$1"
if [ $y -eq 0 ]
then
	echo No such ID
	exit
fi

while read x1 x2 x3
do
	if [[ $id == $x1 ]]
	then
		grade=$x3
		course=$x2
		if [ -z $grade ]
		then
			echo $firstname $lastname has no grade in course $cours
		else
			echo $firstname $lastname has grade of $grade in course $course
		fi
	fi	
done < "$2"

