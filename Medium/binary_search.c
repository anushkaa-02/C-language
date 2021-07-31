#include<stdio.h>
int main()
{
   int c,first,last,mid,n,search,a[100];
   printf("Enter the number of elements:\n");
   scanf("%d",&n); 
   
   printf("Enter the integers:\n");
   for (c= 0;c<n;c++)
   scanf("%d",&a[c]); 
   
   printf("Enter the value to search:\n");
   scanf("%d",&search);
   
   first=0;
   last= n-1;
   mid =(first+last)/2;
   while(first<=last) 
   	{
      if (a[mid]<search)
         first = mid + 1;    
      else if (a[mid] == search) 
	  {
         printf("%d is present at position %d.\n",search,mid+1);
         break;
      }
      else
      last = mid-1;
      mid = (first+last)/2;
    }
   if (first > last)
      printf("Not found! %d is not present in this array.\n",search);
      return 0;  
}
