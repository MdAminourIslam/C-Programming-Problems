#include<stdio.h>
int main()
{
int i = 1;
MBSTU:
    printf("%d ", i);
    i++;
    if (i <= 10) {
        goto MBSTU;  // Jump back to the "loop" label
    }
    return 0;
}
