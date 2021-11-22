//To add two matrices of order M × N
#include <stdio.h>
int main() {
  int r, c, i, j;
  printf("Enter the number of rows");
  scanf("%d", &r);
  printf("Enter the number of columns");
  scanf("%d", &c);
  int a[r][c],b[r][c],sum[r][c];
  if(r==0||c==0){
  	printf("Invalid input");
  }
  else{
  printf("\nEnter elements of 1st matrix:\n");
  for(i=0; i<r;i++)
    for(j=0; j<c;j++) {
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix:\n");
  for (i=0; i<r;i++)
    for (j=0; j<c;j++) {
      scanf("%d", &b[i][j]);
    }
    printf("\nThe First Matrix\n");
    for(i=0; i<r;i++){
    for(j=0; j<c;j++) {
    	printf("%d\t",a[i][j]);
    }
    printf("\n");
}
  printf("\nThe second Matrix\n");
    for(i=0; i<r;i++){
    for(j=0; j<c;j++) {
    	printf("%d\t",b[i][j]);
    }
    printf("\n");
}
  for (i=0; i<r;i++)
    for (j=0;j<c;j++) {
      sum[i][j]=a[i][j]+b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i<r;i++){
    for (j = 0; j<c;j++) {
      printf("%d\t", sum[i][j]);}
      printf("\n");
  }
}
  return 0;
}

