# !/bin/bash

echo $1


str=$1
len=${#str}
str2=$1
j=$((len-1))
#echo "$len"
for i in $(seq 0 $((len-1)))
do
	ch1="${str:i:1}"
	ch2="${str2:j:1}"	# str[j]
	#echo "$ch1"	works as cout
	#echo "$ch2"
	if [ $ch1 != $ch2 ]
	then echo "not palindrome"
		exit 1	
	fi 
	j=$((j-1))
done

echo "string is palindrome" 
