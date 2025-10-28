#include<stdio. h>
#include<math.h>
int main()
{
int X,Y;
float Z;
scanf("%d%d",&X,&Y);
Z=sqrt(pow(X,2)+pow(Y,2));
printf("%.21f",Z);
return 0;
}
