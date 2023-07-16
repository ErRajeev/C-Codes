// Hear Function call With passing value
// that means we can't chang original or in main or n data 

// #include <stdio.h>
// int Fact(int);
// void main(void)
// {
//     int n, f;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     f = Fact(n);
//     printf("Factorial of %d is = %d",n, f);
// }
// int Fact(int n)
// {
//     int i, fact = 1;
//     for (i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return (fact);
// }




// fun call with passing addres of original data or in main data
// that means we are able to change main data by using functins

#include<stdio.h>
void Fun(int *, int *);
void main(void)
{
    int x, y;
    x = 5;
    y = 7;
    printf("%d\t%d\n\n",x,y);
    Fun(&x, &y);
}
void Fun(int * a, int * b)
{
    *a = 7;
    *b = 5;
    printf("%d\t%d", *a, *b);
}







