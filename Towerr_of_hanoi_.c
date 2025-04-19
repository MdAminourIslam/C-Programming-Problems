#include<stdio.h>
void TOH(int n, char beg, char aux, char end);
int main()
{

    int n;
    scanf("%d",&n);
    TOH(n, 'A', 'B', 'C');

}
void TOH(int n, char beg, char aux, char end)
{
    if(n==1) printf("moves disc %d from %c to %c\n",n,beg,end);
    else{
        TOH( n-1, beg, end, aux);
          printf("moves disc %d from %c to %c\n",n,beg,end);
        TOH( n-1, aux, beg, end);
    }
}

