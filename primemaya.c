#include<stdio.h>
int main()
{
int n,i=2,counter=0;
scanf("%d",&n);
while(i<n)
{
if(n%i == 0){
counter=1;
break;
}
i++;
}
if(counter == 0)
{
printf("Prime");
}
else{
printf("Not Prime");
}
return 0;
}
