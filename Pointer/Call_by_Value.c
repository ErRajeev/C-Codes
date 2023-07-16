#include<stdio.h>
#include<conio.h>
void swap (int, int);
int main(void)
{
    int a = 10, b = 20;
    printf("Before Swap Value...\n%d\t%d\n", a,b);
    swap(a, b);
    getch();
    return 0;
}
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("After Swap Value..\n%d\t%d\n", x, y);
}