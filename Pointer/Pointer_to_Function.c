#include <stdio.h>
#include <conio.h>
int add(int, int);
int mult(int, int, int);
int main(void)
{
    int r1, r2, r3;
    int (*ptr)(int, int);
    r1 = add(10, 20);
    r2 = mult(20, 2, 5);
    printf("%d\t%d\n", r1, r2);
    ptr = &add;
    r3 = ptr(10, 40);
    printf("ADD Using Pointer\n%d", r3);
    ptr = &mult; // Argument Does't Match 
    
    getch();
    return 0;
}
int add(int a, int b)
{
    int z;
    return z = a + b;
}
int mult(int a, int b, int c)
{
    int z;
    return z = a * b * c;
}