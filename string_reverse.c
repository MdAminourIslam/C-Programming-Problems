#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    int l=strlen(str);
    for(int i=0,j=l-1;i<j; j--,i++)
    {
        char A=str[i];
        str[i]=str[j];
        str[j]=A;
    }
    printf("%s",str);
    return 0;
}
