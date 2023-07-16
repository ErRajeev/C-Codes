#include <stdio.h>
int main()
{
    int i, n, r, temp, fact, sum = 0;
    printf("Enter a Number..\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        fact = 1; // V.V.I
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum += fact;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
        printf("'%d' is Strong Number", n);
    else
        printf("'%d' is Not a Strong Number", n);
    return 0;
}
