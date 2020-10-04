#!/bin/bash
OLDIFS=$IFS
touch Results.csv
mydirectory="$(pwd)"
echo "UN,EId,Repo-link,Git-clone status,Build-status,Valgrind,cppcheck" >>"$mydirectory"/Results.csv
while IFS="," read  Name EmailID Repolink; do 

	echo "$Name $EmailID $Repolink" 
	
	git clone $Repolink >>"$mydirectory"/gitclone.txt
	if [ $? -eq 0 ];then
  		echo -n "$Name,$EmailID,$Repolink,Pass," >>"$mydirectory"/Results.csv
  		
 	else 
 		echo -n "$Name,$EmailID,$Repolink,Fail," >>"$mydirectory"/Results.csv
	fi

	repo="$(cut -d"/" -f5 <<<"$Repolink")"
	repofull="$(cut -d"." -f1 <<<"$repo")"
	echo "my pwd is: $mydirectory" 
	echo "my repository is :$repofull"
	cd "$mydirectory"/"$repofull"
	
	make >> "$mydirectory"/make.txt
	
	if [ $? -eq 0 ]; then
  		echo  -n "Build Success," >>"$mydirectory"/Results.csv
  		
 	else 
 		echo -n "Build Failed," >>"$mydirectory"/Results.csv
	fi
	
	
	
       valgrind ./*.out >"$mydirectory"/valgrind.txt 2>&1
       lastline="$( tail -n 1 "$mydirectory"/valgrind.txt)"
       errors="$(cut -d" " -f4 <<<"$lastline")"
       echo -n "$errors," >>"$mydirectory"/ReportValgrind.csv

       cppcheck *.c* >"$mydirectory"/cppreport.txt 2>&1
       echo "$(grep -o 'error' "$mydirectory"/cppreport.txt| wc -l)" >>"$mydirectory"/Results.csv
	
       cd "$mydirectory" 
       IFS=$OLDFIS
 	
done<$1

 
 
 

