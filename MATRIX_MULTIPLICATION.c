#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,sum;
    printf("input first maxrix row and coloum:");
    scanf("%d %d",&r1,&c1);
    printf("input second matrix row and coloum:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("This can not be multiply");
        return 0;
    }
    printf("input first matrix r=%d c=%d\n",r1,c1);
    int a[r1+1][c1+1];
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("input second matrix r2=%d c2=%d\n",r2,c2);
    int b[r2+1][c2+1],c[r1+1][c2+1];
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c2;j++)
        {
            sum=0;
            for(k=1;k<=c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
