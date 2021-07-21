#include<stdio.h>
main()
{
int i,asc=65;
char alphabet[27];
for(i=0;i<26;i++)
{
    alphabet[i]=asc;
    asc++;
}
printf("OUTPUT\n");
printf("%s",alphabet);
}
