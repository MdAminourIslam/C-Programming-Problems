#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2,i,j,k,sum;
    printf("enter rows and column for first matrix:");
    scanf("%d %d",&r1, & c1);
     printf("enter rows and column for second matrix:");
    scanf("%d %d",&r2, &c2);

     printf("scaning a matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("scaning b matrix: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("result matrix c: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {    sum=0;
            for(k=0; k<c1; k++)
            {
                sum=sum+a[i][k]*b[k][j];

            }
              c[i][j]= sum;
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
