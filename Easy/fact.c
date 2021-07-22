#include<stdio.h>
void main()
{
  int n,i,fact=1;
  printf("ENTER A NUMBER:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	fact=fact*i;
  }
  printf("\nFACTORIAL OF THE NUMBER IS %d",fact);
}

