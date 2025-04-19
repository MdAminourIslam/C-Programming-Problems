#include<stdio.h>
int BubbleSort(int array[],int n);
int main()
{
    int n,temp;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    BubbleSort(array,n);

    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n\n");
    printf("max_element = %d\n",array[n-1]);
        printf("2nd_max_element = %d",array[n-2]);

return 0;
}
int BubbleSort(int array[],int n)
{
   for(int i=0; i<n-1; i++)
   {
       for(int j=0; j<n-1-i; j++)
       {
           if(array[j]>array[j+1])
           {
               array[j]=array[j]*array[j+1];
               array[j+1]=array[j]/array[j+1];
               array[j]=array[j]/array[j+1];
           }
       }
   }
   return array;
}

