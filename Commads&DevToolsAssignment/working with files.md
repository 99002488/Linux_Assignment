Practise2: Working with files

1. List the files in the /bin directory
Ans. Use Commands: 
		ls /bin


2. Display the type of file of /bin/cat, /etc/passwd and /usr/bin/passwd.
Ans. Use Commands: 
		file /bin/cat /etc/passwd /usr/bin/passwd


3. Use files LFS.png dummy.pdf 
3a. Display the type of file of wolf.jpg and dummy.pdf
Ans. Use Commands: 
		file wolf.jpg dummy.pdf


3b. Rename LFS.png to wolf.pdf 
Ans. Use Commands: 
		mv LFS.png wolf.pdf


3c. Display the type of file of wolf.pdf and dummy.pdf.
Ans. Use Commands:
		file wolf.pdf dummy.pdf


4. Create a directory ~/touched and enter it.
Ans.	Use Commands: 
		mkdir ~/touched 
		cd ~/touched
				
		
5. Create the files today.txt and yesterday.txt in touched.
Ans. Use Commands: 
		touch today.txt yesterday.txt


6. Change the date on yesterday.txt to match yesterday's date.
Ans. Use Commands: 
		touch -t 202009291830 yesterday.txt


7. Copy yesterday.txt to copy.yesterday.txt 
Ans. Use Commands: 
		cp yesterday.txt copy.yesterday.txt


8. Rename copy.yesterday.txt to kim
Ans. Use Commands: 
		mv copy.yesterday.txt kim


9. Create a directory called ~/testbackup and copy all files from ~/touched into it.
Ans.	Use Commands: 
		mkdir ~/testbackup 
		cp -r ~/touched ~/testbackup/ 


10. Use one command to remove the directory ~/testbackup and all files in it.
Ans. Use Commands:
		rm -rf ~/testbackup 


11. Create a directory ~/etcbackup and copy all *.conf files from /etc into it. Did you include all subdirectories of /etc ?
Ans.Use Commands: 
		mkdir ~/etcbackup
		cp /etc/*.conf ~/etcbackup
	No, the subdirectories are not included.


12. Use rename to rename all *.conf files to *.backup .
Ans.Use Commands:  
		rename 's/conf/backup/' *.conf
