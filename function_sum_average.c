#include<stdio.h>

int sumFunction(int n);

float avgFunction(int sum, int n);

int main()
{
    int n;

   scanf("%d",&n);

   int sum = sumFunction(n);

  float avg = avgFunction(sum, n);

   //float avg=sum/n;
   printf("%d\n",sum);
   printf("%.3f\n",avg);
 return 0;
}

int sumFunction(int n)
   {
       int sum=0;
       for(int i=1; i<=n; i++)
       {
            int a;
            scanf("%d",&a);

           sum+=a;
       }
       return sum;
   }
   float avgFunction(int sum, int n)
   {
         float avg =(float)sum/n;
       return avg;
   }
