#include<stdio.h>
int main()
{
int X,Y;
float loss;
scanf("%d%d",&X,&Y);
loss=(X-Y)*100.0/X;
printf("%.21f",loss);
return 0;
}
