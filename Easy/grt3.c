#include<stdio.h>
void main()
{
  int no1,no2,no3;
  printf("Enter the first number:");
  scanf("%d",&no1);
  printf("\nEnter the second number:");
  scanf("%d",&no2);
  printf("\nEnter the third number:");
  scanf("%d",&no3);
  if((no1==no2)&&(no1==no3))
{
printf("All three are equal");
}
else if((no1==no2)&&(no1>no3))
{
printf("No1 and No2 are equal and greater than no3");
}
else if((no1==no3)&&(no1>no2))
{
printf("No1 and No3 are equal and greater than no2");
}
else if((no2==no3)&&(no1<no2))
{
printf("No2 and No3 are equal and greater than no1");
}
else if((no1>no2)&&(no1>no3))
{
printf("%d is greatest",no1);
}
else if((no2>no1)&&(no2>no3))
{
printf("%d is greatest",no2);
}
else
{
printf("%d is greatest",no3);
}
}

