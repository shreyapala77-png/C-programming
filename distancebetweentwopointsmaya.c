#include<stdio.h>
#include<math.h>
int main()
{
int x1, y1,x2,y2;
double distance;
scanf("%d", &x1);
scanf("%d",&y1);
scanf("%d",&x2);
scanf("%d",&y2);
distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2)) ;
printf("%.4f",distance);
return 0;
  }
