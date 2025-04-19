#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i=0,l;
    scanf("%d",&n);
    while(i<=n)
    {
         i++;

        gets(str);
        l=strlen(str);
        if(l>10)
        {
            char chf=str[0];
            char chl=str[l-1];
            printf("%c%d%c\n",chf,l-2,chl);
        }
        else
        {
            printf("%s\n",str);
        }
    }
    return 0;
}
