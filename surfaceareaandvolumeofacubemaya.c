#include<stdio.h>
#include<math.h>
int main()
{
long long int side,Surface_Area,Volume;
scanf("%11d",&side);
Surface_Area=6*side*side;
Volume=side*side*side;
printf("Surface area= %11d and Volume = %11d",Surface_Area,Volume) ;
return 0;
}
