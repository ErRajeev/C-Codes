// WAP to Generate Fibonacci Series...

#include <stdio.h>
#include<conio.h>
int main(void)
{
    int a = 0, b = 1, c, i = 0, limit;
    printf("Enter A Limit...\n");
    scanf("%d", &limit);
    while (limit >= i)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    getch();
    return 0;
}
