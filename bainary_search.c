#include<stdio.h>
int main()
{
    int a[]={1,1,2,2,3,3,4,5};
    int i,j,mid,low=0,high=8;
    int k,ans;
    scanf("%d",&k);
    while(low<=high)
    {
        mid =(low+high)/2;
        if(k==a[mid])
        {
            ans =mid;
            printf("index=%d",ans);
            return 0;
        }
        else if(k<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    printf("value not found");
    return 0;
}
