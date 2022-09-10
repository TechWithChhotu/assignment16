//Write a program in C to find the transpose of a given matrix
#include<stdio.h>
int main()
{
    int Row, Column;
    printf("Enter Row & Column size: ");
    scanf("%d%d",&Row,&Column);
    int mat[Row][Column],i,j,temp;
    printf("Enter %d elements in a matrix: ",Row*Column);
    for(i=0; i<Row; i++)
        for(j=0; j<Column; j++)
            scanf("%d",&mat[i][j]);
    printf("Before matrix:\n");
    for(i=0; i<Row; i++) {
        for(j=0; j<Column; j++)
            printf(" %d",mat[i][j]);

        printf("\n");
    }

    for(i=0; i<Row; i++) {
        for(j=i; j<Column; j++) {
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    printf("after matrix:\n");
    for(i=0; i<Row; i++) {
        for(j=0; j<Column; j++)
            printf(" %d",mat[i][j]);

        printf("\n");
    }

    return 0;
}
