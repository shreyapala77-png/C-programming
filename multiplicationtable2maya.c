#include<stdio.h>
int main()
{
int i,a,b;
scanf("%d%d",&a, &b) ;
for(i=1;i <= b;i++)
  {
    printf ("%dx %d = %d",a, i, a*i);
  }
return 0;
}
