#include<stdio.h>
int binarySearch( int arr[], int n,int k);
int main()
{
    int n,target;
   scanf("%d %d",&n,&target);
   int arr[n];
   for(int i=0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
   int m = binarySearch(arr,n,target);
   if(m !=-1)  printf("%d is found at index = %d",target,m);
    else  printf("%d is not found",target);


}
  int binarySearch( int array[], int n,int k)
  {
      int l=0,r=n-1,m;
      while(l<r)
      {
          m=(l+r)/2;
          if(k==array[m])
          {
              return m;
          }
          else if(k<array[m])
          {
              r=m-1;
          }
          else l=m+1;
      }
     return -1;
  }
