#include<stdio.h>
#include<math.h>
int main()
{
int X,Y,Z,maximum_numberof_chocolates;
scanf("%d%d%d",&X,&Y,&Z) ;
maximum_number_of_chocolates=(X*5+Y*10)/Z;
printf("%d",maximum_numberof_chocolates);
return 0;
}
