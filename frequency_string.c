#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    gets(str);
    int n=strlen(str);
    int array[128]={0};
    for(int i=0; i<n; i++)
    {
        array[str[i]]++;
    }
    for(int i=0; i<128; i++)
    {
        if(array[i]>0)
            printf("%c -> %d\n",i,array[i]);
    }


    return 0;
}

