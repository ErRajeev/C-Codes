/* How to Find Reverce of string */

// #include <stdio.h>
// #include <string.h>
// #include <conio.h>
// int main(void)
// {
//     int i, j, len;
//     char str[30], temp;
//     printf("Enter a String For Swapp..\n");
//     gets(str);
//     len = strlen(str);
//     i = 0;
//     j = len - 1;  // last Index Number of String
//     while (i < j)
//     {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++;
//         j--;
//     }
//     printf("%s", str);
//     getch();
//     return 0;
// }



/* Reverce String Using Another Variable */

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(void)
{
    char inputString[100];
    char outputString[100];
    int len, i = 0, j;
    printf("Please Enter a string to be reversed \n");
    gets(inputString);
    len = strlen(inputString);
    for (j = len - 1; j >= 0; j--)
    {
        outputString[j] = inputString[i];
        i++;
    }
    printf("The reversed string is: %s", outputString);
    getch();
    return 0;
}