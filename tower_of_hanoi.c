#include<stdio.h>
void TOH(int n,char x,char y,char z)
{
    if(n>0)
    {
        TOH(n-1,x,z,y);

               TOH(n-1,z,y,x);
               printf("%c to %c\n",x,y);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    TOH(n,'A','B','C');

}
