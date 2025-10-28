#include<stdio. h>
#include<math.h>
int main()
{
int P,R, T;
float amount,compound_interest;
scanf("%d%d%d",&P,&R,&T);
amount=P*(pow(1+R/100.0,T));
compound_interest=amount-P;
printf("%.2f",compound_interest);
return 0;
}
