#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int max=0,min=99;
    for(;;)
    {
       scanf("%d",&num);
       if(num==-9999) break;
       if(num>max) max=num;
       if(num<min) min=num;

    }
    printf("max_element=%d\n",max);
        printf("min_element=%d",min);

    return 0;
}
