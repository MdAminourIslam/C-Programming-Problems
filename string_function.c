#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    ch = getch();//take a single character from keyboard
                  //but dosen't display that character on the console
                  //and immediately returned without pressing enter key

    printf("%c", ch);
    getch(); // used for hold the screen
    return 0;
}

