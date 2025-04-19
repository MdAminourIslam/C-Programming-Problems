
#include<stdio.h>
int main()
{
    double a[12][12],sum=0.0;
    int i,j,n=10;
    char o[2];
    scanf("%s",&o);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0; i<12; i++)
    {
        for(j=0; j<=n; j++)
        {
            sum=sum+a[i][j];
        }
       n--;
    }
    if(o[0]=='S') printf("%.1lf\n",sum);
    else if(o[0]=='M') printf("%.1lf\n",sum/66.0);
    return 0;
}

