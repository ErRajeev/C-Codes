// // Pass Function to Function as a Argument
// #include <stdio.h>
// #include <conio.h>
// void sum(int, int);
// void mult(int, int);
// void Display(int, int, void (*fptr)(int, int));
// int main(void)
// {
//     int a, b, num;
//     printf("Enter First Number..\n");
//     scanf("%d", &a);
//     printf("Enter Second Number...\n");
//     scanf("%d", &b);
//     printf("For Add Press 1\nFor Mult Presss 2\n");
//     scanf("%d", &num);
//     switch (num)
//     {
//     case 1:
//         Display(a, b, sum);
//         break;
//     case 2:
//         Display(a, b, mult);
//         break;
//     default:
//         printf("Invalid Input..");
//         break;
//     }
//     getch();
//     return 0;
// }
// void sum(int a, int b)
// {
//     printf("%d + %d = %d\n", a, b, a+b);
// }
// void mult(int a, int b)
// {
//     printf("%d * %d = %d\n", a, b, a*b);
// }
// void Display(int a, int b, void (*fptr)(int, int))
// {
//     (*fptr)(a, b);
// }








#include<stdio.h>
#include<conio.h>
void add(int,int);
void mult(int, int);
void sub(int, int);
void div(int, int);
void disp(int, int, void (*fptr)(int, int));
int main(void)
{
    int a, b, ch;
    void (*fptr[10])(int, int) = {add, mult, sub, div}; // Array of Function Pointer
    printf("Enter a First Number...\n");
    scanf("%d", &a);
    printf("Enter Second Number...\n");
    scanf("%d", &b);
    printf("Enter Choise:\n0 => Addition\n1 => Mult\n2 => Sub\n3 => Div\n");
    scanf("%d", &ch);
    disp(a, b, (*fptr[ch]));
    getch();
    return 0;
}
void add(int a, int b)
{
    printf("%d + %d = %d\n", a, b,a+b);
}
void mult(int a, int b)
{
    printf("%d * %d = %d\n", a, b , a*b);
}
void sub(int a, int b)
{
    printf("%d - %d = %d", a, b, a-b);
}
void div(int a, int b)
{
    printf("%d / %d = %d", a, b, a/b);
}
void disp(int a, int b, void (*fptr)(int, int))
{
    (*fptr)(a, b);
}