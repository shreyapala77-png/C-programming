#include<stdio.h>
int main()
{
int N,M;
scanf("%d%d", &N, &M) ;
int discountonline=N-(N*10)/100;
if(discountonline<M)
printf("ONLINE1) ;
else if(discountonline>M)
{
printf ("DINING");
}
else{
printf ("EITHER");
}
return 0;
}
