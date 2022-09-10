// Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter row & column: ");
	scanf("%d%d",&row,&column);
	
	int mat[row][column],i,j,sum_row=0,sum_column=0;
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
	
	for(i=0;i<row;i++){
		sum_column=0;
		sum_row=0;
		for(j=0;j<column;j++){
			sum_column+=mat[i][j];
			sum_row+=mat[j][i];
		}
		printf("sum of %dth column = %d",i+1,sum_column);
		printf("\nsum of %dth row  = %d\n",i+1,sum_row);
	}
	
return 0;
}

