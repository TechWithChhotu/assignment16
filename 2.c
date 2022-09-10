//Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int mat_first[3][3],mat_second[3][3], product[3][3],i,j,k;
    printf("Enter first matrix elements: ");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&mat_first[i][j]);
        }
    }

    printf("Enter second matrix elements: ");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&mat_second[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            product[i][j]=0;
            for(k=0; k<3; k++)
            {
                product[i][j]+=mat_first[i][k]*mat_second[k][j];
            }
        }
    }

    printf("\n\t\tproduct of two matrix: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf(" %d", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
