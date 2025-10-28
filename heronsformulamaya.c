#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
double area,s;
scanf("%d%d%d",&a, &b,&c);
s=(float)(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.4f",area);
return 0;
}
