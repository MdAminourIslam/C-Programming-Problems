#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter number:");
   scanf("%d",&n);
   int ans = fact(n);
    printf("factorial %d! = %d",n,ans);
    return 0;
}
int fact(int n)
{
    if(n==1) return 1;
    else return n*fact(n-1);

}
