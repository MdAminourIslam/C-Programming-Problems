
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,x,y,temp,i,j,sum=0;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d %d",&x,&y);

            if(x%2==0)
            {
                for(i=x+1;;i=i+2)
                {
                    temp++;
                    sum=sum+i;
                    if(temp==y) break;
                }
                 printf("%d\n",sum);
            }

        else{
                for(i=x+1;;i=i+2)
                {
                     temp++;
                    sum=sum+i;
                    if(temp==y) break;
                }
                 printf("%d\n",sum);
            }
    }

 return 0;
}
