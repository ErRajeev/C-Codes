// No Return Type Without Arg

#include<stdio.h>
void Add(void); // Function Defination
void main()
{
    Add (); // Calling
}
void Add()
{
    int a, b, sum = 0;
    printf("Enter First Number..\n");
    scanf("%d", &a);
    printf("Enter Second Number..\n");
    scanf("%d",&b);
    sum = a + b;
    printf("%d + %d = %d",a,b,sum);
}



// No Return With Arguments

// #include<stdio.h>
// void fun(int, int);
// void main()
// {
//     int a, b;
//     printf("Enter First Number..\n");
//     scanf("%d", &a);
//     printf("Enter Second Number..\n");
//     scanf("%d", &b);
//     fun(a, b); // Function Calling
// }
// void fun(int x, int y)
// {
//     int sum;
//     sum = x + y;
//     printf("%d + %d = %d",x,y,sum);
// }



// Return Type Without Arguments

// #include<stdio.h>
// int Add(void);
// int main()
// {
//     int n = Add();
//     printf("%d",n);
// }
// int Add(void)
// {
//     int a, b, sum;
//     printf("Enter First Number..\n");
//     scanf("%d",&a);
//     printf("Enter Second Number..\n");
//     scanf("%d",&b);
//     sum = a + b;
//     return sum;
// }



// Return Type With Argument

// #include<stdio.h>
// int Add(int, int);
// void main()
// {
//     int a, b, sum;
//     printf("Enter First Number..\n");
//     scanf("%d", &a);
//     printf("Enter Second Number..\n");
//     scanf("%d", &b);
//     sum = Add(a, b); // these are arg
//     printf("%d + %d = %d",a,b,sum);
// }
// int Add(int x, int y) //these are parameter
// {
//     return x + y;
// }















// #include<stdio.h>
// #include<conio.h>
// void fun(int);
// int main(void)
// {
//     int n;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     fun(n);
//     getch();
//     return 0;
// }
// void fun(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("%d", fact);    
// }