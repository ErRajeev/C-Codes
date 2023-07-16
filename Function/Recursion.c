// Find Factorial of a Number Using Recursion.


// #include <stdio.h>
// #include <conio.h>
// int fact(int);
// int main(void)
// {
//     int n;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     printf("Factorial Of %d is : %d", n, fact(n));
//     getch();
//     return 0;
// }
// int fact(int a)
// {
//     if (a <= 0)
//         return 1;
//     else
//         return a * fact(a - 1);
// }



// Sum Of n Natural Numbers Number..

// #include <stdio.h>
// #include <conio.h>
// int sum(int);
// int main(void)
// {
//     int n, res;
//     printf("Enter a Number...\n");
//     scanf("%d", &n);
//     res = sum(n);
//     printf("Total.. %d",res);
//     getch();
//     return 0;
// }
// int sum(int a)
// {
//     if (a == 1)
//         return a;
//     else
//         return a + sum(a - 1);
// }



// Find Factorial of a Number Using Indirect Recursion

// #include<stdio.h>
// #include<conio.h>
// int fun1(int);
// int fun2(int);
// int main(void)
// {
//     int n;
//     printf("Emter a NUmber..\n");
//     scanf("%d", &n);
//     printf("%d", fun1(n));
//     getch();
//     return 0;
// }
// int fun1(int n)
// {
//     if (n<=1)
//         return 1;
//     else
//         return n * fun2(n-1);
// }
// int fun2(int n)
// {
//     if(n<=1) return 1;
//     else return n * fun1(n-1);
// }





// It's Tail Recursion...

// #include<stdio.h>
// #include<conio.h>
// int fun(int);
// int main(void)
// {
//     int n;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     printf("%d\t", fun(n));
//     getch();
//     return 0;
// }
// int fun(int a)
// {
//     if(a<=1)
//         return 1;
//     else
//     printf("%d\t",a);
//     fun(a/2);
// }

// // Non Tail Recursion...

// #include<stdio.h>
// #include<conio.h>
// int fun(int);
// int main(void)
// {
//     int n;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     printf("%d\t", fun(n));
//     getch();
//     return 0;
// }
// int fun(int a)
// {
//     if(a<=1)
//         return 1;
//     else
//     printf("%d\t", a);
//     fun(a/2);
//     printf("%d\n", a);
// }



// #include<stdio.h>
// #include<conio.h>
// int fun(int);
// int main(void)
// {
//     int n;
//     printf("Enter a Number...\n");
//     scanf("%d", &n);
//     printf("%d", fun(n));
//     getch();
//     return 0;
// }
// int fun(int n)
// {
//     if(n < 1) 
//         return 0;
//     else
//         return 1 + fun(n/1);
// }




// GATE Qustion And Sol...

#include<stdio.h>
#include<conio.h>
int count(int);
int main(void)
{
    count(3);
    getch();
    return 0;
}
int count(int n)
{
    static int d = 1;
    printf("%d\t", n);
    printf("%d\t", d);
    d++;
    if(n>1)
        count(n-1);
    printf("%d\t", d);
}