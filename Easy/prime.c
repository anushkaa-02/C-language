#include<stdio.h>
void main()
{
int i,n,r,c=0;
printf("Enter the value:");
scanf("%d",&n);
if(n!=1||n!=2)
for(i=2;i<n;i++)
{if(n%i==0)
{
c=1;
break;
}
}
if(c==0)
printf("the given number %d is prime",n);
else
printf("the given number %d is not prime",n);
}
