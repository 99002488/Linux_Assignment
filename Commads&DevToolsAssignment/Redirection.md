practice: Redirection
1. Store error from a command to file.
Ans.  Use command:
		command-name 2> errors.txt
		command-name 2> stderr.txt

2. Store output from a command to file.
Ans.  Use command:
		command-name >  output.txt
		command-name >  stdout.txt

3. Create a log file and append the errors to that file.
Ans.	Use command: #include <syslog.h> 
	Using this header and syslog() functions to send data to whatever system logging program is active. 
	
4. Feed inline input to a command
Ans.  Use command:
{ echo $firstname; echo $lastname ; } | cat


5. Feed output of one command as input to another.
Ans.  Use command:  <cmd> <arguments> | <cmd> <arguments>


6. Run a command that gives one output and one error.
Ans. 	genesis88@Trainee88:~/Desktop$ ls >Capture.txt
	genesis88@Trainee88:~/Desktop$ cat Capture.txt
	assessment_problem_tripdb
	Capture.txt
	CPPAssignmenttt
	CPPMiniProject
	javacodes
	LinuxAssignment
	LINUXFINAL
	thujavaclass.odt
	genesis88@Trainee88:~/Desktop$ nano error.sh
	genesis88@Trainee88:~/Desktop$ chmod +x error.sh
	genesis88@Trainee88:~/Desktop$ ./error.sh
	hello there
	cat: bad-filename.txt: No such file or directory


7. Store output to a file and redirect error to display in the above command.
Ans.  	genesis88@Trainee88:~/Desktop$ ./error.sh > Capture.txt
	cat: bad-filename.txt: No such file or directory
	genesis88@Trainee88:~/Desktop$ cat Capture.txt
	hello there


