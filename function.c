#include<stdio.h>
int get_sum(int a, int b)
{
    int sum=a+b;
    return sum;
}
void say_hi()
{
    printf("hi\n");
}
int main()
{
    printf("main start:\n");
    say_hi();
    int result=get_sum(100,20);
    printf("my sum=%d\n",result);
    return 0;
}
