// Dangling Pointer....


#include<stdio.h>
#include<conio.h>
int main(void)
{
    int* ptr;
    {
        int a = 10;
        printf("%d", *ptr);
    }
    getch();
    return 0;
}




// #include<stdio.h>
// #include<conio.h>
// int* point();
// int main(void)
// {
//     int res, *ptr;
//     res = point();
//     printf("%d", *ptr);
//     getch();
//     return 0;
// }
// int* point()
// {
//     int a = 10;
//     return &a;
// }