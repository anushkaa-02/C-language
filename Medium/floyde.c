#include<stdio.h>
int main()
{
    int i,j,no;
    printf("ENTER A NUMBER:");//5
    scanf("%d",&no);
     for(i=1;i<=no;i++)
     {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

     }
}
