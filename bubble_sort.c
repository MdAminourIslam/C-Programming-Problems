#include<stdio.h>
int main()
{
    int arr[]={8,7,6,5,4,3,2,1};
    int i,j,temp,size=8;
    for(i=0; i<size-1 ;i++)
    {
        for(j=0; j<size-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n\n After sorting the Arry:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}
