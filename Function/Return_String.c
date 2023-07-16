#include<stdio.h>
#include<conio.h>
char* display();
int main(void)
{
    char* str;
    str = display();
    str [0] = 'Z';
    printf("%s",str);
    getch();
    return 0;
}
char* display()
{
    static char str[50] ;
    printf("Enter Your Name..\n");
    gets(str);
    return str;
}