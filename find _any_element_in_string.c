
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int count=0;
      printf("enter any string: ");

      gets(str);

     //fgets(str,99,stdin);

     //scanf("%[^\n]s",str);
      printf("find character :");
       scanf("%c",&ch);
        for(int i=0; str[i]!='\0';i++)
        {
            if(ch==str[i])
            {
                count++;
            }
        }

         printf("%c found is = %d times \n",ch,count);



 return 0;
}
