#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int n=num;
    int sum=0;
    while(num!=0)
    {
        int d=num%10;

        sum=(sum*10)+d;

        num/=10;
    }
    if(sum==n)
        printf("palindrome\n");
    else
         printf("not palindrome\n");


    return 0;
}
