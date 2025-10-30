#include <stdio.h>
#include <stdlib.h>
int main()
{
int A, B;
scanf("%d%d", &A, &B);
int sum = A +B;
int product =A * B;
int diff = abs(sum -product) ;
printf("%d", diff);
return 0;
}
