#include<stdio.h>
int main()
{
int rev=0,n,m,r;
scanf("%d",&n);
m=n;
while(n != 0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
if(rev == m)
printf
("Palindrome") ;
else
printf("NotPalindrome") ;
return 0;
}
