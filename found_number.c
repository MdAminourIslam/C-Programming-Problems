
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int q,num,temp;
    scanf("%d",&q);
    printf("enter test number: ");

    while(q!=0)
    {
        temp=0;
        scanf("%d",&num);
        for(int j=0; j<n; j++)
        {

            if(arr[j]==num) temp++;
        }
        q--;
    }

    if(temp==0) printf("not found!!\n");
    else
        printf("found!!\n");
    return 0;
}

