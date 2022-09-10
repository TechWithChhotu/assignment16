// Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
	int mat[10][10],sum=0,row,i,j;
	printf("Enter number of row: ");
	scanf("%d",&row);
	
	printf("Enter %d elements in a matrix: ",row*row);
	for(i=0;i<row;i++){
			for(j=0;j<row;j++){
				scanf("%d",&mat[i][j]);
				if(i==j)
				sum+=mat[i][j];
			}
	}
	
	printf("\n\t\tMatrix:\n");
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf(" %d",mat[i][j]);
		}
		printf("\n");
	}
						
	printf("sum of Right diagonals = %d",sum);
return 0;
}

