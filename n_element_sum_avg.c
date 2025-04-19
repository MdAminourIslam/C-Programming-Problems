#include<stdio.h>
int main()
{
    int n,a; scanf("%d",&n);
    int sum=0;
    float avg;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    avg=(float)sum/n;
    printf("sum=%d\n",sum);
        printf("avg=%.4f\n",avg);

    return 0;
}
