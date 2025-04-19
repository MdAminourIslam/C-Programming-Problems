#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x=0;
    int n;
    char str[3];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",&str);
        if(str[1]='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}

