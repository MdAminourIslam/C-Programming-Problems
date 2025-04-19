#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int original_number=n;
    int ans=0;
    while(n>0)
    {
       int digit=n%10;
       ans=(ans*10)+digit;
       n/=10;
    }
    if(original_number==ans) printf("%d is palindrome",original_number);
    else printf("%d is not palindrome\n",original_number);
    return 0;
}


