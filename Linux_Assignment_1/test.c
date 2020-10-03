#include<stdio.h>
#include "include/mystring.h"
#include "include/myutils.h"
#include "include/bitmask.h"
#include "src/bitmask.c"
#include "src/myutils.c"
#include "src/mystring.c"

int main(){
char s1[100];
char s2[100];
printf("Enter 1st String : ");
scanf("%s",s1);
printf("Enter 2nd String : ");
scanf("%s",s2);
mystrlen(s1);
mystrcpy(s1);
mystrcat(s1,s2);
mystrcmp(s1,s2);


int a,b,c,d,x,y;
printf("Enter no of numbers to be added :");
scanf("%d", &a);
vsum(a);
printf("Enter a no to calculate factorial: ");
scanf("%d",&a);
d=factorial(a);
printf("fact %d",d);
printf("Enter a no to check whether the no is prime or not: ");
scanf("%d",&b); 
printf("Enter a no to check whether the no is palindrome or not: "); 
scanf("%d",&c); 
 isprime(b);
 ispalindrome(c);
 printf("factorial is %d \n",d); 
 
int n,k;
printf("Enter two numbers \n");
scanf("%d %d", &n,&k);
printf("%d\n",setBit(n,k));
printf("%d\n",resetBit(n,k));
printf("%d\n",flip(n));
printf("%d",query(n,k));
return 0;
}
