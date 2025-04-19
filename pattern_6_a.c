#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(j=4-i;j>0;j--)
        {
            printf("  ");
        }
        for(k=i;k<2*i;k++)
        {
            printf("%d ",k);
        }
        for(l=2*i-2;l>=i;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}
