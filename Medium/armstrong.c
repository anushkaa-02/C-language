#include<stdio.h>
#include<math.h>
void main()
{int n,c=0,x,sum=0,r;
printf("Enter any number:");
scanf("%d",&n);
x=n;

while(n>0)
{c=c+1;
n=n/10;
}
n=x;
while(n>0)
{r=n%10;
sum=sum+pow(r,c);
n=n/10;
}
if(x==sum)
printf("\n Given number is an armstrong number");
else
printf("\n Given number is not an armstrong number");
}
