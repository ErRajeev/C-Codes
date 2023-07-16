// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     char name[0] ;
//     printf("Eneter Your Name..\n");
//     scanf("%s",name);
//     printf("Hi, %s Wellcome.!!",name);
//     getch(); 
//     return 0;
// }

// Gets Functin

#include<stdio.h>
#include<conio.h>
int main(void)
{
    char name[20];
    printf("Enter Your Name..\n");
    gets(name);
    printf("Hello, \"%s\" Wellcome.!!",name);
    getch();
    return 0;
}

//   String.h Header File

// #include <stdio.h>
// #include<conio.h>
// #include <string.h>
// int main()
// {
//     char str[30];
//     unsigned int len;
//     printf("Enter a String..\n");
//     gets(str);
//     len = strlen(str);
//     printf("The Name Is : '%s'\nAnd the length is : '%d'", str, len);
// getch();
// return 0;
// }