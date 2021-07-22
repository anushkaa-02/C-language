#include<stdio.h>
main()
{
int num1,num2,choice;
printf("Enter first Number");
scanf("%d",&num1);
printf("Enter second Number");
scanf("%d",&num2);
printf("1.Add    2.Sub   3.Mul   4.Div    5.Mod \n");
printf("Enter choice: ");
scanf("%d",&choice);
switch(choice)
{
   case 1:
     printf("Addition of 2 Numbers %d",(num1+num2));break;
   case 2:
      printf("Subtraction of 2 Numbers %d",(num1-num2));break;
   case 3:
      printf("Multiplication of 2 Numbers %d",(num1*num2));break;
   case 4:
     printf("Division of 2 Numbers %d",(num1/num2));break;
   case 5:
     printf("Modulo of 2 Numbers %d",(num1%num2));break;
   default:
    printf("Invalid Choice..");

}
}
