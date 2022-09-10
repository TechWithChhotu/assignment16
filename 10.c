//Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter row and column size: ");
	scanf("%d%d",&row,&column);
	
	int mat[row][column],i,j,count=0,max,index=-1;
	printf("Enter %d elements in a matrix: ",row*column);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&mat[i][j]);
		}		
	}
	
	printf("\n\t\tmatrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf(" %d",mat[i][j]);
		}		
		printf("\n");
	}
	
	for(i=0;i<row;i++){
		count=0;
		for(j=0;j<column;j++){
			if(mat[i][j]==1)
				count++;
		}
		if(max<count){
			max=count;
			index=i;
		}		
	}
printf("row with maximum number of 1s is row number %d on %d times",index,max);
return 0;
}

