
#include<stdio.h>
int maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1; i<5; i++)
    {
        if(max<x[i]);
        {
            max=x[i];
        }
    }
    return max;

}
int main()
{
    int num[]= {10,20,30,40,50};
    int maximum_value=maximum(num);
    printf("maximum = %d\n",maximum_value);
}
