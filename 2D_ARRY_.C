#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    int i,j,temp=0;

    printf("enter the value of 2D arry: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
            temp++;
        }
        printf("\n");
    }
    float average=sum/temp;
    printf(" average =%.2f\n",average);
    return 0;

}
