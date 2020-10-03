#include <stdio.h>
#include <unistd.h>
int main(){
	char arg;
	printf("Enter the c program to be compiled and linked : ");
	scanf("%s",&arg);
   system("cc -o ./a.out arg");
   execl("./a.out", "a.out", NULL);
   return 0;
}
