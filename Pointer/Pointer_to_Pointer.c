#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("A = %d\t%d\t%d\t%d", a, *p, **q, ***r);
    getch();
    return 0;
}