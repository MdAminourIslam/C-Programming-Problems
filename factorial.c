#include<stdio.h>
int main()
{
    int n,ans=1;
   scanf("%d",&n);
   for(int i=n; i>=1; i--)
   {
       ans*=i;
   }
    printf("factorial %d! = %d",n,ans);
    return 0;
}
