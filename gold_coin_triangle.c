#include<stdio.h>
int main()
{
    long long int test,low,mid,high,n,ans;
    scanf("%d",&test);

    while(test--)
    {
        low=1;
        scanf("%d",&n);
        high=n;

        while(low<=high)
        {
            mid=(low+high)/2;

            if((mid(mid+1))/2 > n)
            {
                high=mid+1;
            }
            else
            {
                ans=mid;

                high=mid-1;

            }
        }
    }
    printf("%d",ans);
    return 0;
}
