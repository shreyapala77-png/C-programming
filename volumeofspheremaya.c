#include<stdio.h>
#include<math.h>
int main()
{
int r;
float volume;
scanf("%d",&r);
volume=((4*3.14)*(pow(r,3)))/3;
printf("%.2f",volume) ;
return 0;
}
