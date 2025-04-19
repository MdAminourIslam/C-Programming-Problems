#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n,m,a,total;
    scanf("%lld %lld %lld",&n,&m,&a);
    double height,width;

    height = ceil((double)n/(double)a);

    width = ceil((double)m/(double)a);
    total = height*width;
    printf("%lld",total);
 return 0;
}
