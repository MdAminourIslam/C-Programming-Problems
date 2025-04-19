#include<stdio.h>
int main()
{
    int YEAR; scanf("%d",&YEAR);
   // if( (YEAR%4==0)|| (YEAR%400==0) && (YEAR%100!=0))
    if( (YEAR%4==0 || YEAR%400==0) && (YEAR%100!=0))

    {
        printf("yes\n");
    }
    else printf("no\n");
}
