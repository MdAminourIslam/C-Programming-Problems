#include<stdio.h>
int main()
{
    double a[12][12],sum=0.0;
    int i,j,k,m;
    char ch;
    scanf("%d %c",&m,&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0;i<12; i++)
    {
       sum=sum+a[m][i];
    }
    if(ch=='S') printf("%lf\n",sum);
    if(ch=='M') printf("%.1lf\n",sum/12);
    return 0;
}
