Practice : links
1. Create two files named winter.txt and summer.txt, put some text in them.
Ans: echo cold > winter.txt ; echo hot > summer.txt

2. Create a hard link to winter.txt named hlwinter.txt.
Ans: ln winter.txt hlwinter.txt

3. Display the inode numbers of these three files, does the hard links have the same inode?
Ans: genesis88@Trainee88:~/Desktop$ ls -li winter.txt summer.txt hlwinter.txt
+ ls --color=auto -li winter.txt summer.txt hlwinter.txt
7106609 -rw-rw-r-- 2 genesis88 genesis88 5 Sep 30 17:58 hlwinter.txt
7106618 -rw-rw-r-- 1 genesis88 genesis88 4 Sep 30 17:58 summer.txt
7106609 -rw-rw-r-- 2 genesis88 genesis88 5 Sep 30 17:58 winter.txt

4. Use the find command to list the two hardlinked files
Ans: genesis88@Trainee88:~/Desktop$ find . -inum 7106609
+ find . -inum 7106609
./winter.txt
./hlwinter.txt
genesis88@Trainee88:~/Desktop$ find . -inum 7106618
+ find . -inum 7106618
./summer.txt

5. Everything about a file is in the inode, except two things : name them!
Ans: The name of the file is in a directory, and the contents is somewhere on the disk.

6. Create a symbolic link to summer.txt called slsummer.txt.
Ans: ln -s summer.txt slsummer.txt

7. Find all files with inode number 2. What does this information tell you ?
Ans: It tells you there is more than one inode table (one for every formatted partition + virtual file systems)

8. Look at the directories /etc/init.d/ /etc/rc2.d/ /etc/rc3.d/ ... do you see the links ?
Ans: ls -l /etc/init.d 
     ls -l /etc/rc2.d
     ls -l /etc/rc3.d
     
9. Look in /lib with ls -l...
Ans: ls -l /lib

10. Use find to look in your home directory for regular files that do not(!) have one hard link.
Ans: genesis88@Trainee88:~$ find ~ ! -links 1 -type f
+ find /home/genesis88 '!' -links 1 -type f
/home/genesis88/Desktop/winter.txt
/home/genesis88/Desktop/hlwinter.txt

