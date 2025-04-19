#include<stdio.h>
int main()
{
    int e[5],o[5],n;

    int i,j=0,k=0,l=0,m;
    for(i=0; i<15; i++)
    {
        scanf("%d",&n);

        if(n%2==0)
        {
            e[j]=n;
            j++;
            if(j==5)
            {
                for(j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n",j,e[j]);
                    e[j]=0;

                }
                j=0;
            }
        }

        else
        {
            o[k]=n;
            k++;
            if(k==5)
            {
                for(k=0; k<5; k++)
                {
                    printf("impar[%d] = %d\n",k,o[k]);
                    o[k]=0;
                }
                k=0;
            }

        }


    }

    for(i=0; i<5; i++)
    {
        if(o[i]==0) break;
        printf("impar[%d] = %d\n",i,o[i]);
    }
    for(i=0; i<5; i++)
    {
        if(e[i]==0) break;
        printf("par[%d] = %d\n",i,e[i]);
    }


    return 0;
}
