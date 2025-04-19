//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[50];
//    gets(str);
//    int len=strlen(str);
//    int i,j=len-1;
//    int temp=0;
//    for(int i=0; i<=(len-1)/2; i++,j--)
//    {
//        if(str[i]!=str[j])
//        {
//            temp++;
//            printf("not palindrome\n");
//            break;
//
//        }
//    }
//    if(temp==0) printf("palindrome\n");
//    return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    int len=strlen(str);
    int i=0,j=len-1;
    while(i<j)
    {
        if(str[i++]!=str[j--])
        {
            printf("not palindrome\n");

            return  0;
        }
    }
        printf("palindrome\n");
    return 0;
}
