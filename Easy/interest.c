#include<stdio.h>
int main()
{
float p,r,t,i;
printf("Enter the total amount:");
scanf("%f",&p);
printf("Enter the rate of interest:");
scanf("%f",&r);
printf("Enter the month:");
scanf("%f",&t);
i=(p*r*t)/1200;
printf("The interest is:%f",i);
return 0;
}
