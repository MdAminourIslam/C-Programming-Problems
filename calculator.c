#include<stdio.h>
int fun_add(int m,int n )
{
    int add=m+n;
    return add;

}
int fun_subtract(int m,int n )
{
    int subtract=m-n;
    return subtract;
}
int fun_multiply(int m,int n )
{
    int  multi=m*n;
    return multi;
}
float fun_divide(float m,float n )
{
    float divide=m/n;
    return divide;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int add= fun_add(m,n);
    int subtract= fun_subtract(m,n);
    int multiply= fun_multiply(m,n);
    float divide= fun_divide(m,n);

    printf("sum = %d\n",add);
    printf("subtraction = %d\n",subtract);
    printf("multiplication = %d\n",multiply);
    printf("divided = %.2f\n",divide);
    return 0;
}

