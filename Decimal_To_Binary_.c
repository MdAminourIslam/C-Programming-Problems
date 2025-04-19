#include<stdio.h>
int main()
{
    int binary[32];
    printf("enter any decimal number :");
    int n,i;
    scanf("%d",&n);
    if(n==0) printf("binary=%d",n);
    else
    {
        i=0;
        while(n>0)
        {
            binary[i]=n%2;
            n/=2;
            i++;
        }
    }
    printf("binary = ");
    for(int j=i-1; j>=0; j--) printf("%d",binary[j]);
    return 0;
}
