Practice9: shell Pattern matching
1. Create a test directory and enter it.
Ans. Use command:mkdir test ; cd test

2. Create the following files :
file1
file10
file11
file2
File2
File3
file33
fileAB
filea
fileA
fileAAA
file(
file 2
(the last one has 6 characters including a space)
Ans. Use command:
		Touch <filename>


3. List (with ls) all files starting with file
Ans. Use command:
		ls -l file*


4. List (with ls) all files starting with File
Ans. Use command:
		ls -l File*


5. List (with ls) all files starting with file and ending in a number.
Ans. Use command:
		ls file*[0-9]


6. List (with ls) all files starting with file and ending with a letter
Ans. Use command:
		ls file*[a-z]


7. List (with ls) all files starting with File and having a digit as fifth character.
Ans. Use command:
		ls File[0-9]*


8. List (with ls) all files starting with File and having a digit as fifth character and nothing else.
Ans. Use command:
		ls File[0-9]


9. List (with ls) all files starting with a letter and ending in a number.
Ans. Use command:
		ls [a-z]*[0-9]


10. List (with ls) all files that have exactly five characters.
Ans. Use command:
		ls ?????


11. List (with ls) all files that start with f or F and end with 3 or A.
Ans. Use command:
		ls [fF]*[3A]


12. List (with ls) all files that start with f have i or R as second character and end in a number.
Ans. Use command:
		ls f[iR]*[0-9]


13. List all files that do not start with the letter F.
Ans. Use command:
		ls [!F]*


14. Can echo replace ls ? How can you list the files in the current directory with echo ?
Ans. Use command:
		echo *


15. Is there another command besides cd to change directories ?
Ans. Use command:
		pushd <directory_path>  (to add directory to the stack)
then , pushd  to switch between directories in the stack
