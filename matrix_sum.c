#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],ans[10][10];
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(r1!=r2 && c1!=c2)
    {
        printf("not possible\n");
        return 0;
    }
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }


    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            ans[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("printing result matrix\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }

}
