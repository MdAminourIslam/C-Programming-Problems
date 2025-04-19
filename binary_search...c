//middle_print
#include<stdio.h>
int main()
{
    int right,left,middle,value;
    int arr[]= {1,2,3,5,7,8,9,11,13,15};
    left=1;
    right=10;
    scanf("%d",&value);
    while(left<=right)
    {
        middle=(left+right)/2;
        if(value==arr[middle])
        {
            printf("%d",arr[middle+1]);
            return 0;
        }
        else if(value<arr[middle])
        {
            right=middle-1;
        }
        else
        {
            left=middle+1;
        }
    }
    printf("value not found\n");
}
