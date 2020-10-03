Practice: standard file permissions
1. As normal user, create a directory ~/permissions. Create a file owned by yourself in there.
Ans: genesis88@Trainee88:~/Desktop$ mkdir permissions
+ mkdir permissions
genesis88@Trainee88:~/Desktop/permissions$ touch myfile.txt
+ touch myfile.txt

2. Copy a file owned by root from /etc/ to your permissions dir, who owns this file now ?
Ans: genesis88@Trainee88:~/Desktop/permissions$ cp /etc/hosts ~/permissions/
+ cp /etc/hosts /home/genesis88/permissions/
The copy is owned by me.

3. As root, create a file in the users ~/permissions directory.
Ans: touch /home/genesis88/permissions/rootfile

4. As normal user, look at who owns this file created by root.
Ans: ls -l ~/permissions
Owned by root

5. Change the ownership of all files in ~/permissions to yourself.
Ans: genesis88@Trainee88:~$ chown genesis88 ~/permissions/*
You cannot become owner of the file that belongs to root.

6. Make sure you have all rights to these files, and others can only read.
Ans: chmod 644 (on files)
     chmod 755 (on directories)
     
7. With chmod, is 770 the same as rwxrwx--- ?
Ans: Yes

8. With chmod, is 664 the same as r-xr-xr-- ?
Ans: Yes

9. With chmod, is 400 the same as r-------- ?
Ans: Yes

10. With chmod, is 734 the same as rwxr-xr-- ?
Ans: No

11a. Display the umask in octal and in symbolic form.
Ans: genesis88@Trainee88:~$ umask
+ umask
0002
genesis88@Trainee88:~$ umask -S
+ umask -S
u=rwx,g=rwx,o=rx

11b. Set the umask to 077, but use the symbolic format to set it. Verify that this works.
Ans: genesis88@Trainee88:~$ umask -S u=rwx,go=
+ umask -S u=rwx,go=
u=rwx,g=,o=

12. Create a file as root, give only read to others. Can a normal user read this file ? Test writing to this file with nano.
Ans: genesis88@Trainee88:~/Desktop$ echo hello > /home/genesis88/Desktop/root.txt
+ echo hello
genesis88@Trainee88:~/Desktop$ chmod 744 /home/genesis88/Desktop/root.txt
+ chmod 744 /home/genesis88/Desktop/root.txt
genesis88@Trainee88:~/Desktop$ nano root
+ nano root

13a. Create a file as normal user, give only read to others. Can another normal user read this file ? Test writing to this file with vi.
Ans: genesis88@Trainee88:~/Desktop$ echo hello > file
+ echo hello
genesis88@Trainee88:~/Desktop$ chmod 744 file
+ chmod 744 file
Yes, others can read this file

13b. Can root read this file ? Can root write to this file with vi ?
Ans: Yes, root can read and write to this file. Because Permissions do not apply to root.

14. Create a directory that belongs to a group, where every member of that group can read and write to files, and create files. Make sure that people can only delete their own files.
Ans: mkdir /home/project42 
     groupadd project42
     chgrp project42 /home/project42 
     chmod 775 /home/project42
     
