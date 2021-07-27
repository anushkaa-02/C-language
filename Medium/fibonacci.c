#include<stdio.h>
int main()
{
    int x,y,z,m,n;
    printf("how many numbers you want?:");
    scanf("%d",&n);
    x=0;y=1;m=3;
    printf("%d \t %d",x,y);
    while(m<=n)
{
  z=x+y;
  printf("\t%d",z);
  x=y;
  y=z;
  m=m+1;
}
return 0;
}
