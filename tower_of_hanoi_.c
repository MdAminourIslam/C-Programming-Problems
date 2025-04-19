#include<stdio.h>
void towerOfHanoi(int n,char beg,char aux,char end)
{
    if(n<=0) ("\n Illegal entry");
    else if(n==1) printf("\n move disc %d from %c to %c",n,beg,end);
    else
    {
        towerOfHanoi(n-1,beg,end,aux);
        //towerOfHanoi(1,beg,aux,end);
        printf("\n move disc %d from %c to %c",n,beg,end);
        towerOfHanoi(n-1,aux,beg,end);
    }
}
int main()
{
    int n;
    char a,b,c;
    scanf("%d",&n);
    towerOfHanoi(n,'A','B','C');
}

