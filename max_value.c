//max value of the arry
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    printf("enter the element of arry:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1; i<n; i++)
    {

        if(max<a[i])
            max=a[i];
    }
    printf("max value of the arry :%d\n",max);
    return 0;
}
