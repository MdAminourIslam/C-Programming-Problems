#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    gets(s1);
    gets(s2);
    int m=strlen(s1);
    int n=strlen(s2);
    int cnt,j;
    if(n>m) printf("not found\n");
    else
    {
        for(int i=0; i<m; i++)
        {
            if(s2[0]==s1[i])
            {
                cnt=0;
               for(j=0; j<n;i++, j++)
               {
                  if(s2[j]!=s1[i])
                  {
                      break;
                  }
                   else if(j==n-1)
                   {
                       printf("sub string found\n");
                       return 0;
                   }
               }
            }
             //if(j==n) printf("sub string found\n");
        }
        printf("sub string not found\n");
    }
    return 0;
}
