// WAP to Check Pelindrome Number...
#include <stdio.h>
int main()
{
    int n, m, r, sum, temp;
    printf("Enter a number for cheak Pelindrome..\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
        printf("'%d' is Pelindrome Number..", n);
    else
        printf("'%d' is Not Pelindrome Number...", n);
}