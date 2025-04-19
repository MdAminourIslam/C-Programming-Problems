#include<stdio.h>
int main()
{
    int arr[3];
    int n,i,temp=0,t=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        temp=0;
        for(i=0; i<3; i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]==1) temp++;
        }

        if(temp>=2)
        {
            t++;
        }

    }
    printf("%d\n",t);
    return 0;
}
