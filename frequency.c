#include<stdio.h>
int main()
{
    int i,count;

    char str[1000],ch;
    printf("enter any string :");
    gets(str);
    for(ch='a' ; ch<='z'; ch++)
    {    count =0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(ch==str[i]) count++;
        }
        if(count>0)
            printf("%c find %d times\n",ch,count);
    }
    return 0;
}
