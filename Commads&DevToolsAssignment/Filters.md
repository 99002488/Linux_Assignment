practice: filters
1. Put a sorted list of all bash users in bashusers.txt.
Ans. Use command:
		grep bash /etc/passwd | cut -d: -f1 | sort > bashusers.txt



2. Put a sorted list of all logged on users in onlineusers.txt.
Ans. Use command: 
		who | cut -d' ' -f1 | sort > onlineusers.txt



3. Make a list of all filenames in /etc that contain the string conf in their filename.
Ans. Use command:
		ls /etc | grep conf



4. Make a sorted list of all files in /etc that contain the case insensitive string conf in their filename.
Ans. Use command:
		ls /etc | grep -i  conf | sort



5. Look at the output of /sbin/ifconfig. Write a line that displays only ip address and the subnet mask.
Ans. Use command:
genesis88@Trainee88:~$ /sbin/ifconfig | head -2 | grep 'inet ' | tr -s ' ' | cut -d' ' -f3,5
192.168.60.51 255.255.254.0

6. Write a line that removes all non-letters from a stream.
Ans. Use command:
genesis88@Trainee88:~/Desktop$ cat text
Hello, welcome to linux!
genesis88@Trainee88:~/Desktop$ cat text | tr -d ',!$?.*&^%#@;()-'
hello welcome to linux 

7. Write a line that receives a text file, and outputs all words on a separate line.
Ans. Use command:
genesis88@Trainee88:~/Desktop$ cat text | tr ' ' '\n'
hello,
welcome
to
linux!


8. Write a spell checker on the command line. (There may be a dictionary in /usr/share/dict/ .)
Ans. Use command:
genesis88@Trainee88:~/Desktop$ echo "The zun is shining today" > text
genesis88@Trainee88:~/Desktop$ cat text
The Sun is shining today
genesis88@Trainee88:~/Desktop$ aspell check text
genesis88@Trainee88:~/Desktop$ cat text
The Sun is shining today

