#include <stdio.h>

int countOnes(int number)
{
   int one=0;
   for(int i=1; i<=number; i++)
   {
       int v=i;
    while (v > 0) {
        if(v%10==1) one++;
        v /= 10;
    }
   }
return one;

}

int main()
{
    int number;

    //printf("Enter a number: ");
    scanf("%d", &number);

    int ans=countOnes(number);

        printf("one is %d times\n", ans);


    return 0;
}
