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
    int j;
        for(int i=0; i<m; i++)
        {
           for(j=0; j<n; j++)
           {
               if(s2[j]!= s1[i+j])
               {
                   break;
               }
           }
           if(j==n)
           {
               printf("sub string found\n");
                       return 0;
            }
        }
        printf("sub string not found\n");
    }

