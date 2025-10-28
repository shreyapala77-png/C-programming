#include<stdio.h>
#include<math.h>
int main()
{
float salary,HRA, DA, PF,Gross_salary;
scanf("%f%f%f",&salary,&HRA,&DA) ;
PF=(0.12*salary);
Gross_salary=salary+HRA+DA+PF;
printf("%.2f%.2f", PF,Gross_salary);
return 0;
}
