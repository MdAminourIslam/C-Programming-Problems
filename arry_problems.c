#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    printf("enter the element of the arry:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=0)
        {
            a[i]=100;
        }
    }
    printf("Fill in the Arry:\n");
    for(i=0; i<n; i++)
{
    printf("A[%d] = %d\n",i,a[i]);
}

    return 0;
}

