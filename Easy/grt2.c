#include<stdio.h>
void main()
{
  int no1,no2;
  printf("Enter the first number:");
  scanf("%d",&no1);
  printf("\nEnter the second number:");
  scanf("%d",&no2);
  if (no1==no2)
  {
   printf("Two numbers are equal");
  }
  else if(no1>no2)
  {
   printf("\nThe greatest no is %d",no1);
  }
  else
  printf("\nThe greatest no is %d",no2);
  
}

