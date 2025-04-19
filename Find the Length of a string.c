#include<stdio.h>
int main()
{
    char s[]={"aminour islam rasel rana"};

     int i=0,len=0;
    while(s[i]!='\0')
    {
        i++;
        len++;

    }
    printf("%d",len);
    return 0;
}
