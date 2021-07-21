#include<stdio.h>
 int main()
{
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("\nEnter the second number: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping first number is=%d \n After swapping second number is=%d",a,b);
return 0;
}
