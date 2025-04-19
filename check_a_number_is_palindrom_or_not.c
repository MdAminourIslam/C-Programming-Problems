
#include<stdio.h>
int main()
{
    int num,ans=0,digit;
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        ans=ans*10+digit;

    }
 if(num==ans) printf("palendrome\n");
 else printf("not palendrome\n");
    return 0;
}
