/* WAP to convert a string upper case to lower case */

// #include <stdio.h>
// #include <conio.h>
// int main(void)
// {
//     char str[50], A, Z;
//     int i = 0;
//     printf("Enter a String..\n");
//     gets(str);
//     while (str[i] != '\0')
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         // Here we can also use range like > = 65 && < = 90
//         {
//             str[i] = str[i] + 32;
//         }
//         i++;
//     }
//     printf("%s", str);
//     getch();
//     return 0;
// }

/* WAP to convert a string lower case to upper case */

#include <stdio.h>
#include <conio.h>
int main(void)
{
    char str[50];
    int i = 0;
    printf("Enret a String for Change Case..\n");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        // Here we can also use range like > = 97 && < = 122
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("%s", str);
    getch();
    return 0;
}