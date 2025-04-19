#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum=0;
    while(num !=0 )
    {
        sum+=num;
        scanf("%d",&num);
    }
    printf("%d",sum);
    return 0;
}
