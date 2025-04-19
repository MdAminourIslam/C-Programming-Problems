
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s1[10],ans[1000];
    int i=0,j=0;
    scanf("%d",&n);
    getchar();
    for(int l=1; l<=n; l++)
    {
        j=0;
        gets(s1);
        while(s1[j]!='\0')
        {
            ans[i]=s1[j];

            i++;
            j++;
        }
    }
    //s2[i]='\0';
    printf("%s",ans);
    return 0;
}
