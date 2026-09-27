#!/bin/bash

#Conditional checks
if [ $# -ne 3 ]
then
	echo "Error: Three arguments needed."
	exit 1
fi
if [ ! -f $1 ]
then 
	echo "Need to run with factorial file"
	exit 1
fi

# Runs the factorial program and save the answer.
output=$($1 $2) 

if [ "$output" = "$3" ] #kept getting error when ./ was missed for the second argument needed to added "".
then
	echo "Pass"
else
	echo "Fail"
	echo "Expected: $3"
	echo "Got: $output"
fi

