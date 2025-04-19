#include<stdio.h>
int main()
{
    int n,a; scanf("%d",&n);
    int max_element=0;
    int min_element=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>max_element) max_element=a;
        //if(a<min_element) min_element=a;
    }

    printf("maximum_value=%d\n",max_element);
   // printf("minimum_value=%d\n",min_element);

    return 0;
}

