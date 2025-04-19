#include<stdio.h>
int sumFunction(int n);
float averageFunction(int sum,int n);
//int factorial =factorialFunction(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    //for(int i=0; i<n; i++) scanf("%d",&array[i]);
    int sum=sumFunction(n);
    float average=averageFunction(sum,n);
     binarySearch(array,n);
     //int factorial=factorialFunction(n);
    printf("sum=%d\n",sum);
    printf("average=%.3f\n",average);
    return 0;
}
int sumFunction(int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int x; scanf("%d",&x);
        sum+=x;
    }
    return sum;
}
float averageFunction(int sum,int n)
{
    float average=(float)sum/n;
    return average;
}
int binarySearch(int array[],int n)
{
    int l=0,r=n-1,m;
    int k=5;
    while(l<r)
    {
        if(array[m]==k)
        {
            return m;
        }
        else if(array[m]<k) r=m-1;
        else l=m+1;
    }
    return -1;
}


