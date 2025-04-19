#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int cnt=0;
    int j;
    for(int i=n; i<=m; i++)
    {
        cnt=0;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                cnt++;
                printf("%d is not prime\n",i);
                break;
            }
        }
        if(cnt==0 && i!=1)
                printf("%d is prime\n",i);
    }
    return 0;
}

