#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,sum;
    int first[10][10],second[10][10],result[10][10];
    printf("enter rows and column for first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("enter rows and column for second matrix:\n");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("error !! not possible multiplication\n");
        printf("enter rows and column for first matrix:\n");
        scanf("%d %d",&r1,&c1);
        printf("enter rows and column for second matrix:\n");
        scanf("%d %d",&r2,&c2);
    }
    printf("taking input for first matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1 ; j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("taking input for second matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2 ; j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    //printing first matrix
    printf("a=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1 ; j++)
        {

            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    //printing second matrix

    printf("\n\n\n");
    printf("b=\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2 ; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2 ; j++)
        {
             sum=0;
            for(k=0; k<c1; k++)
            {

                sum=sum+first[i][k] * second[k][j];

                result[i][j]=sum;

            }
        }
    }
    //printing result matrix
    printf("c=\n");
    for(i=0; i<c1; i++)
    {
        for(j=0; j<r2; j++)
        {

            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}


