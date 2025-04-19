#include <stdio.h>

int main() {

   int x,y,temp,i,sum=0;
   scanf("%d %d",& x, &y);
   if(x>y)
   {
       temp=x;
       x=y;
       y=temp;
   }
 for(i=x; i<=y; i++)
 {
     if(i%2!=0)
     {
         sum=sum+i;
     }
 }

    printf("%d\n",sum);
    return 0;
}
