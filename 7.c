// Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter row and column size: ");
	scanf("%d%d",&row,&column);
	
	int mat[row][column],i,j;
	printf("Enter %d elements in a matrix: ",row*column);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++)
			scanf("%d",&mat[i][j]);
	}

	printf("\n\t\tmatrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++)
		printf(" %d",mat[i][j]);
		printf("\n");
	}
	
	printf("\nLower triangular matrix:\n");
	for(i=0;i<row;i++){
		for(j=0;j<i;j++)
		printf(" %d",mat[i][j]);
		printf("\n");
	}
return 0;
}

