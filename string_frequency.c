#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    gets(str);
    int l= strlen(str);
    int arr[129]={0};
    for(int i=0; i<l; i++)
    {
        arr[str[i]]++;
    }
    for(int i=0; i<129; i++)
    {
        if(arr[i]>0) printf("%c -> %d\n",i,arr[i]);
    }
    return 0;
}
