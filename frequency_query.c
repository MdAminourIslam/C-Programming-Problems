#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int ar[10000]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        ar[x]++;
    }

    while(t--)
    {
       int q;
       scanf("%d",&q);
       while(q--)
       {
           int a;
           scanf("%d",&a);
           if(ar[a]==0)printf("not found\n");
           else
           printf(" found\n");
       }
    }
    return 0;
}
