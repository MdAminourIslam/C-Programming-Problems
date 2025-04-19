#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,sum,c1,c2,r1,r2;

    printf("enter rows & column for a matrix:");
    scanf("%d %d",&r1,&c1);
      printf("enter rows & column for b matrix:");
    scanf("%d %d",&r2,&c2);

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; i<c2; j++)
        {
             sum=0;
            for(k=0; k<c1; k++)
            {
                sum=sum+a[i][k]*b[k][j];
               c[i][j]=sum;
           }
        }
    }
    printf("printing multiplication matrix:\n");
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
