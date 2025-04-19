#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}

