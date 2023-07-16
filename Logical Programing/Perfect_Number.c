// #include <stdio.h>
// void main(void)
// {
//     int i, n, sum = 0;
//     printf("Enter a Number\n");
//     scanf("%d", &n);
//     for (i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//             sum += i;
//     }
//     if (n == sum)
//         printf("'%d' is Perfect Number..", n);
//     else
//         printf("'%d' is Not Perfect Number..", n);
// }




// WAP to find perfect number in the given range

#include <stdio.h>
int main()
{
    long n, i, lmin, lmax, sum;
    printf("Enter starting Range ...\n");
    scanf("%d", &lmin);
    printf("Enter End Range ...\n");
    scanf("%d", &lmax);

    for (n = lmin; n <= lmax; n++)
    {
        sum = 0;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (n == sum)
            printf("%d\n", n);
    }
    return 0;
}