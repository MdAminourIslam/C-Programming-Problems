//terget_er_immidate_biggest_element_print
#include<stdio.h>
int main()
{
    int right,left,middle,value;
    int arr[]= {1,2,3,3,3,3,3,3,3,3,5,7,8,9,9,11,12,12,12,12,13,15};
    left=1;
    right=22;
    scanf("%d",&value);
    int upper_bound;
    while(left<=right)
    {
        middle=(left+right)/2;


        if(value<arr[middle])
        {
            left=middle+1;


        if(value>arr[middle])
        {
           upper_bound=middle;
         right=middle-1;
        }

    }
    }
    printf("upper bound=%d\n",upper_bound);

}
