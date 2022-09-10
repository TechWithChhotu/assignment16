//Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter row and column size: ");
	scanf("%d%d",&row,&column);
	
	int mat[row][column],i,j,count=0;
	printf("Enter %d elements in a matrix: ",row*column);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==0)
			count++;
		}		
	}
	if(count>(row*column)/2)
	printf("yes, it is a sparse matrix");
	else
	printf("not, it is not asparse matrix");
return 0;
}

