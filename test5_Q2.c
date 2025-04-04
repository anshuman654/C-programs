#include<stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 3

void transposeMatrix(int matrix[][MAX_COLS], int rows, int cols);

int main(){

	int rows=3;
	int cols=3;

    int matrix[MAX_ROWS][MAX_COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

	
	 transposeMatrix(matrix,rows,cols);
     
    
 
  	return 0;
}

void transposeMatrix(int matrix[][MAX_COLS], int rows, int cols){

	int i,j;

	for(i=0;i<cols;i++){
		for(j=0;j<rows;j++){
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
}
