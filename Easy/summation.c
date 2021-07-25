#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("ENTER A NUMBER:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	sum=sum+i;
  }
  printf("\nSUMMATION IS %d",sum);
  
}

