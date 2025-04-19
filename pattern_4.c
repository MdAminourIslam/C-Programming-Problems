#include<stdio.h>
int main()
{
    int n=6;
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<n; i++)
  {         for(int j=0; j<=i; j++)
        {
            //if(i==0) printf("*\n");
            printf("*");
        }
        printf("\n");
     }
    return 0;
}
