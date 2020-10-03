Practise1: working with directories
1. Display your current directory.
Ans. Use Command: 
		pwd
     Current directory: /bin
     
     
2. Change to the /etc directory.
Ans. Use Command: 
		cd /etc


3. Now change to your home directory using only three key presses.
Ans. Use Command: 
		cd


4. Change to the /boot/grub directory using only eleven key presses.
Ans. Use Command:
		cd /boot/grub (use tab to complete the path)


5. Go to the parent directory of the current directory.
Ans. Use Command: 
		cd ..


6. Go to the root directory.
Ans. Use Command: 
		cd /


7. List the contents of the root directory.
Ans. Use Command:
		ls


8. List a long listing of the root directory.
Ans. Use Command: 
		ls -l


9. Stay where you are, and list the contents of /etc.
Ans. Use Command: 
		ls -l /etc


10. Stay where you are, and list the contents of /bin and /sbin.
Ans. Use Command: 
		ls /bin /sbin


11. Stay where you are, and list the contents of ~.
Ans. Use Command: 
		ls ~


12. List all the files (including hidden files) in your home directory.
Ans. Use Command: 
		ls -a  (-a list all the files)


13. List the files in /boot in a human readable format.
Ans. Use Command: 
		ls -h /boot  (-h lists in human readable format)


14. Create a directory testdir in your home directory.
Ans. Use Command: 
		mkdir ~/testdir


15. Change to the /etc directory, stay here and create a directory newdir in your home directory.
Ans.	Use Command: 
		cd /etc 
		mkdir ~/newdir
	
		
16. Create in one command the directories ~/dir1/dir2/dir3 (dir3 is a subdirectory from dir2,and dir2 is a subdirectory from dir1 ).
Ans. Use Command: 
		mkdir -p ~/dir1/dir2/dir3 (-p to create parent directory in this case dir1/dir2q)


17. Remove the directory testdir.
Ans. Use Command: 
		rmdir testdir


18. Open manual page for bash and read about pushd and popd by searching in manpage.
Ans.	Use Command: 
		man bash
	To find in man pages: /<wordtobesearched>
	TO navigate through the search results: n

