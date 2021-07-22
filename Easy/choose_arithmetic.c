//Choose an arithmetic operation by switch case
#include <stdio.h>
void main ()
{
    int no1,no2;
    char choice,ch;
    do
    {
    printf("-------------------------------------\n-------------------------------------");
    printf ("\nEnter first number: ");
    scanf ("%d", &no1);
    printf ("Enter second number: ");
    scanf ("%d", &no2);
    printf ("A-Add, S-Sub, M-Mul, D-Div, N-Mod\n");
    printf("-------------------------------------");
    printf ("\nEnter your choice: ");
    scanf ("\n%c", &choice);
    switch (choice)
    {
    case 'A':
        printf ("The sum of %d and %d is :::%d", no1,no2,(no1+no2));
        break;

    case 'S':
        printf ("The difference of %d and %d is %d", no1,no2,(no1-no2));
        break;

    case 'M':
        printf ("The product of %d and %d is %d", no1,no2,(no1*no2));
        break;

    case 'D':
        printf ("The quotient of %d and %d is %d", no1,no2,(no1/no2));
        break;

    case 'N':
        printf ("The remainder of %d and %d is %d", no1,no2,(no1%no2));
        break;

    default:
        printf ("Invalid choice");
        break;
    }
    printf ("\n\nDo you want to continue? Y/N\n");
    scanf ("\n%c", &ch);
    }
    while ((ch=='Y')||(ch=='y'));
}
