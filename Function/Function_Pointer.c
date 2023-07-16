#include<stdio.h>
#include<conio.h>
int fact(int);
int main(void)
{
    int n, res;
    printf("Enter a Number...\n");
    scanf("%d", &n);
    int (*ptr)(int) = fact;  // hear (*ptr)(int) is a variable
    res = (*ptr)(n);
    printf("Factorial of %d is = %d\n",n,res);
    getch();
    return 0;
}
int fact(int n)
{
    int res =1;
    for (int i = 1; i <= n; i++)
    {
        res*=i;
    }
    return res;
}