#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n; i<=m; i++)
    {
        int count=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0) printf("%d is a prime number\n",i);
    }
    return 0;
}
