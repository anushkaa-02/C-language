#include<stdio.h>
void main()
{
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
if(y%400==0)
    printf("\nLeap year");
else if (y%100==0)
    printf("\nNot a leap year");
else if (y%4==0)
    printf("\n Leap year");
else
    printf("\nNot a leap year");
}
