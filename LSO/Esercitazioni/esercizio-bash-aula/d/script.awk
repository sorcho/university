BEGIN{FS="/"}
array=system("find -mtime -1")

for ( i in array )
	system("sed -n 1,5p " array[i])
END{}
