#include<stdio.h>
int main()
{
int a,b,x,y,p,q;
scanf("%d%d%d%d",&a,&b, &x, &y) ;
p=(a*2+b*1);
q=(x*2+y*1);
if(p>q)
printf("Messi") ;
else if(q>p)
printf ("Ronaldo") ;
else
printf("Equal");
return 0;
}
