//time_complexity: O(n*2)
//space_complexity: O(1)
#include<stdio.h>
int main()
{
    int a[]={4,6,2,3,5,7,9,11,22,55};
    int i,value,hole;
    for(i=1; i<10; i++)
    {
        value=a[i];
        hole=i;
      while(hole>0&&a[hole-1]>value)
      {
          a[hole]=a[hole-1];
          hole--;
      }
      a[hole]=value;
    }
   for(i=0; i<10; i++)
   {
       printf("%d  ",a[i]);
   }
}
