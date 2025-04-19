//max value of the arry
#include<stdio.h>
int main()
{
    int n,i,odd_sum=0,even_sum=0;
    scanf("%d",&n);
    int a[n];
    printf("enter the element of arry:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("value of the Arry:");
     for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
        if(a[i]%2==0)
        {
            even_sum=even_sum+a[i];
        }
        else if(a[i]%2!=0)
        {
             odd_sum=odd_sum+a[i];
        }

    }
    printf("\nsum of the odd value:%d\n",odd_sum);
      printf("sum of the even value:%d\n",even_sum);
    return 0;
}
