#include <stdio.h>
#include <conio.h>
#include<string.h>
int main(void)
{
    char s1[50], s2[20];
    int i, s1len, s2len;
    printf("Enter First String..\n");
    gets(s1);
    s1len = strlen(s1);
    printf("Enter Second String..\n");
    gets(s2);
    s2len = strlen(s2);
    for ( i = 0; i <= s2len ; i++)
    {
       s1[s1len + i] = s2[i];
    }
    printf("%s", s1);
    getch();
    return 0;
}