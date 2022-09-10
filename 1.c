// Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int mat_first[3][3],mat_second[3][3],sum[3][3],i,j;
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

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum[i][j]=mat_first[i][j]+mat_second[i][j];
        }
    }
    printf("\n\t\tsum of two matrix: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf(" %d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
