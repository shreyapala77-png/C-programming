#include<stdio.h>
#include<math.h>
int main()
{
int height_in_inches;
float height_in_centimeters;
scanf("%d",&height_in_inches);
height_in_centimeters=height_in_inches*2.54;
printf("%.2f",height_in_centimeters);
return 0;
}
