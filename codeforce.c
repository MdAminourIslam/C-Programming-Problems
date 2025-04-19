#include<stdio.h>
int main()
{
   long long int n,k,l=1,i;
    scanf("%lld %lld",&n,&k);
  long long int arr[n];
    for(i=1; i<=n ; i+=2)
    {
        arr[l]=i;
        l++;

    }
    for( i=1; i<n; i++)
    {
        if(i%2==0)
        {
            arr[l]=i;
            l++;
        }
    }
    printf("%lld\n",arr[k]);
    return 0;
}
