#include<stdio.h>
  int main()
  {
      int a[]={1,2,3,4,5,6,7,8,9,10};
      int left=0,right=9,mid,num;
      printf("enter test number:");
      scanf("%d",&num);
      while(left<=right)
      {
          mid=(left+right)/2;
          if(num==a[mid])
          {
              printf("number is found at position : %d\n",mid);
              return 0;
          }
          else if(num<a[mid])
          {
              right=mid-1;
          }
          else if(num>a[mid])
          {
              left=mid+1;
          }
      }
      printf("number is not found\n");
  }
