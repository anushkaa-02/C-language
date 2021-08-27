#include<stdio.h>
void main()
{
    int m,n,i;
    printf("Enter the first number:");
    scanf("%d",&m);
    printf("\nEnter the last number:");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
          printf("FIZZBUZZ\n");
        else if(i%3==0)
          printf("FIZZ\n");
        else if(i%5==0)
          printf("BUZZ\n");
        else
        printf("%d\n",i);
    }
}
