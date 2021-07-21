#include<stdio.h>
int main() 
{
      int fst, snd, temp;
      printf("Enter first number: ");
      scanf("%d", &fst);
      printf("Enter second number: ");
      scanf("%d", &snd);
      temp = fst;
      fst = snd;
      snd = temp;

      printf("\nAfter swapping, firstNumber = %d\n", fst);
      printf("\nAfter swapping, secondNumber = %d\n", snd);
      return 0;
}
