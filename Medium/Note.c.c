#include <stdio.h>  
int main()  
{  
    int amount,temp;
  
    printf("Enter amount\n");
    scanf("%d", &amount);  
  
    temp   = amount / 2000;  
    amount = amount - (temp*2000);
  
    printf("%d   x 2000 = %d\n", temp, (temp*2000));
  
    temp   = amount / 500;  
    amount = amount - (temp*500);
  
    printf("%d   x 500  = %d\n", temp, (temp*500));  
  
    temp   = amount / 200;  
    amount = amount - (temp*200);  
  
    printf("%d   x 200  = %d\n", temp, (temp*200));  
  
    temp   = amount / 100;  
    amount = amount - (temp*100);  
  
    printf("%d   x 100   = %d\n", temp, (temp*100));  
  
    temp   = amount / 50;  
    amount = amount - (temp*50);  
  
    printf("%d   x 50   = %d\n", temp, (temp*50));  
  
    temp   = amount / 20;  
    amount = amount - (temp*20);  
  
    printf("%d   x 20   = %d\n", temp, (temp*20)); 
    
	temp   = amount / 10;  
    amount = amount - (temp*10);  
  
    printf("%d   x 10   = %d\n", temp, (temp*10));  
    
    temp   = amount / 5;  
    amount = amount - (temp*5);  
  
    printf("%d   x 5   = %d\n", temp, (temp*5));
    
    temp   = amount / 1;  
    amount = amount - (temp*1);  
  
    printf("%d   x 1   = %d\n", temp, (temp*1));
  
    return 0;  
}  
