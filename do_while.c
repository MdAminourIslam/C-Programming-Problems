#include<stdio.h>
#include<math.h>
int main()
{
    int num,iterator=0;
    printf("enter -9999 if you want to exit");
    int max=0,min=99;
    do{
          iterator++;
       scanf("%d",&num);
       if(num==-9999) break;
       if(num>max) max=num;
       if(num<min) min=num;

    }
    while(1);
    printf("max_element=%d\n",max);
        printf("min_element=%d",min);

    return 0;
}
