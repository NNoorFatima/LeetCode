# Read from the file file.txt and output the tenth line to stdout.
#!/bin/bash
file='file.txt'  
LINE_NUM=1
while read LINE
do
    if [ $LINE_NUM -eq 10 ]
    then 
	    echo "$LINE"
    fi
	LINE_NUM=$((LINE_NUM+1))
done < $file  
