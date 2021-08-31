#include<stdio.h>
void main()
{
  int n,i=1,sum=0;
  printf("ENTER A NUMBER:");
  scanf("%d",&n);
  while(i<=n)
  {
  	sum=sum+i;
  	i++;
  }
  printf("\nTRIANGULAR NUMBER IS %d",sum);
  
}

