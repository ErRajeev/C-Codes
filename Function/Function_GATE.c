// GATE Problem Solving...

// #include <stdio.h>
// #include <conio.h>
// int che(int, int);
// int main(void)
// {
//     int x = 2, y = 5;
//     y = che(y, x);
//     x = che(y, x);
//     printf("%d", x);
//     getch();
//     return 0;
// }
// int che(int x, int y)
// {
//     x = 2 * x + y;
//     return x;
// }




// #include<stdio.h>
// #include<conio.h>
// int incr(int);
// int main(void)
// {
//     int i, j;
//     for ( i = 0; i <= 4; i++)
//     {
//         j = incr(i);
//     }
//     printf("%d", j);
//     getch();
//     return 0;
// }
// int incr(int i)
// {
//     static int count = 0;
//     count += i;
//     return (count);
// }



// #include<stdio.h>
// #include<conio.h>
// int r();
// int main(void)
// {
//     for(r(); r(); r())
//     {
//         printf("%d\t", r());
//     }
//     getch();
//     return 0;
// }
// int r()
// {
//     static int num = 7;
//     return num --;
// }



// #include<stdio.h>
// #include<conio.h>
// void f(int*, int);
// int main(void)
// {
//     int i = 5, j = 10;
//     f(&i, j);
//     printf("%d", i+j);
//     getch();
//     return 0;
// }
// void f(int* p, int m)
// {
//     m = m + 5;
//     *p = *p + m;
// }



#include<stdio.h>
#include<conio.h>
int f(int*, int*);
int i = 0, j = 1;
int main(void)
{
    f(&i, &j);
    printf("%d\t%d",i,j);
    getch();
    return 0;
}
int f(int* p, int* q)
{
    p = q;
    *p = 10;
}