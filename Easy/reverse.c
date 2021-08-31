#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    printf("Enter a string:");
    gets(s);
    strrev(s);
    printf("After reversing the string is: %s\n", s);

   return 0;
}
