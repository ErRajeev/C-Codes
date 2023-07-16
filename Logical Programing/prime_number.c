// Check a Number is Prime or Not
#include <stdio.h>
int main()
{
    int n, i = 1, count = 0;
    printf("Enter a Number...\n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
            count += 1;
        i++;
    }
    if (count == 2)
        printf("%d\tis Prime Number.!", n);
    else
        printf("%d\tis Not Prime Number.!", n);
    return 0;
}