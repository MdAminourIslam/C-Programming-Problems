#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s1[10],s2[1000];
    int i=0,j=0;
    scanf("%d",&n);
    getchar();
    for(int l=1; l<=n; l++)
    {
        j=0;
        gets(s1);
        while(s1[j]!='\0')
        {
            s2[i]=s1[j];

            i++;
            j++;
        }
    }
    //s2[i]='\0';
    printf("%s",s2);
    return 0;
}
