#include<stdio.h>
int main()
{
    int a,i,b,c,n,temp=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a+b+c>=2) temp++;
    }
    printf("%d\n",temp);
    return 0;
}
