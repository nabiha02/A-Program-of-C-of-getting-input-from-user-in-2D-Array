//Getting input for 2D array

#include <stdio.h>

int main(void){

  int A[100][100],i,j,no_row,no_col;

  printf("Input your no_row: ");
  scanf("%d", &no_row);
  printf("Input your no_col: ");
  scanf("%d", &no_col);

  for(i=0;i<no_row;i++){
    
    for(j=0;j<no_col;j++){

      printf("A[%d][%d] = ", i,j);
      scanf("%d", &A[i][j] );

    }
    
  }

}