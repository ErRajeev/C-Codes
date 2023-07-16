/* Pointer in c Language.. */

#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a = 100;
    int* ptr;
    ptr = &a;
    printf("Print a Valur : %d\n", a);
    printf("Print a Address using Pointer : %u\n", ptr);
    printf("Print a Address : %u\n", &a);
    printf("Print pointer variable Address : %u\n", &ptr);
    printf("Print value using Pointer : %d\n", *ptr);
    printf("Print Value : %d\n", *(&a));
    getch();
    return 0;
}