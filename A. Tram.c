
#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int arr[n],result=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>h) result=result+2;
        else  result=result+1;

    }
    printf("%d",result);

    return 0;
}
