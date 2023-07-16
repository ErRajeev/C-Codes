#include <stdio.h>
#include <conio.h>
int main(void)
{
    char s[50];
    int i = 0;
    printf("Enter a String..\n");
    gets(s);
    while (s[i] != '\0')
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        i++;
    }
    printf(s);
    getch();
    return 0;
}