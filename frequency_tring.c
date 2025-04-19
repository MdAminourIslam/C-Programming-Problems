#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char s1[100];
  int arr[123]={0};
  printf("enter any string:");
  gets(s1);

  for(int i=0; i<strlen(s1); i++)
  {
      arr[s1[i]]++;
  }
   for(int i=0; i<122; i++)
   {
       if(arr[i]==0) continue;

       printf("%c -> %d \n",i,arr[i]);
   }
   return 0;
}
