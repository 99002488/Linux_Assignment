Practise5: commands and arguments
1. How many arguments are in this line (not counting the command itself).
touch '/etc/cron/cron.allow' 'file 42.txt' "file 33.txt"
Ans: Three

2. Is tac a shell builtin command ?
Ans: type tac

3. Is there an existing alias for rm ?
Ans: alias rm

4. What is -i option of rm. Create and remove a file to test the -i option.
Ans: -i option of rm is prompt before every removal. 
     touch tryfile                            //created file
     rm -i tryfile
rm: remove regular empty file 'testfile'? y   //removed file

5. Execute: alias rm='rm -i' . Test your alias with a test file. Does this work as expected ?
Ans: It asks for confirmation.

6. List all current aliases.
Ans: alias

7a. Create an alias called 'city' that echoes your hometown.
Ans: alias city='echo Mumbai'

7b. Use your alias to test that it works.
Ans: city
Mumbai

8. Execute set -x to display shell expansion for every command.
Ans: set -x

9. Test the functionality of set -x by executing your city and rm aliases.
Ans:genesis88@Trainee88:~/Desktop$ set -x
genesis88@Trainee88:~/Desktop$ city
+ echo Mumbai
Mumbai
genesis88@Trainee88:~/Desktop$ 

10. Execute set +x to stop displaying shell expansion.
Ans: set +x

11. Remove your city alias.
Ans: unalias city

12. What is the location of the cat and the passwd commands ?
Ans: genesis88@Trainee88:~$ which cat
+ which cat
/usr/bin/cat
genesis88@Trainee88:~$ which passwd
+ which passwd
/usr/bin/passwd
genesis88@Trainee88:~$ 

13. Explain the difference between the following commands:
echo
/bin/echo
Ans: The echo command will be interpreted by the shell as the built-in echo command. The /bin/echo command will make the shell execute the echo binary located in the /bin directory.

14. Explain the difference between the following commands:
echo Hello
echo -n Hello
Ans: The -n option of the echo command will prevent echo from echoing a trailing newline. echo Hello will echo six characters in total, echo -n hello only echoes five characters.

15. Display A B C with two spaces between B and C.
Ans: genesis88@Trainee88:~$ echo "A B  C"
+ echo 'A B  C'
A B  C

16. Display (do not use spaces) exactly the following output:
4+4		=8
10+14 	=24
Ans:genesis88@Trainee88:~$ echo -e "4+4\t=8" ; echo -e "10+14\t=24"
+ echo -e '4+4\t=8'
4+4	=8
+ echo -e '10+14\t=24'
10+14	=24

17. Use echo to display the following exactly :??\\
Find two solutions with single quotes, two with double quotes and one without quotes.
Ans: ??\\
echo '??\\'
echo -e '??\\\\'
echo "??\\\\"
echo -e "??\\\\\\"
echo ??\\\\

18. Use one echo command to display three words on three lines.
Ans: echo -e "one \ntwo \nthree"
