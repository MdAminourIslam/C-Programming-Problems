//max value of the arry
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],ab[n];
    printf("enter the element of arry a:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element of arry b:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",& b[i]);
    }

    for(i=0; i<n; i++)
    {

        ab[i]=a[i]+b[i];
    }
    printf("value of AB Arry:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ",ab[i]);
    }
    return 0;
}

