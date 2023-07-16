// #include <stdio.h>
// int main()
// {
//     int n, i, temp, r, tot, sum = 0;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     temp = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         tot = (r * r * r);
//         sum = sum + tot;
//         n = n / 10;
//     }
//     n = temp;
//     if (n == sum)
//         printf("'%d' is Armstrong Number.", n);
//     else
//         printf("'%d' is Not Armstrong Number.", n);
//     return 0;
// }

// Find Armstrong in a given Range...

#include <stdio.h>
int main()
{
    int startn, lastn, num, temp, i, r, sum;
    printf("Enter a Starting Point..\n");
    scanf("%d", &startn);
    printf("Enter a Last Range..\n");
    scanf("%d", &lastn);
    for (num = startn; num <= lastn; num++)
    {
        temp = num;
        sum = 0;
        while (temp > 0)
        {
            r = temp % 10;
            sum += (r * r * r);
            temp = temp / 10;
        }
        if (sum == num)
            printf("%d\n", num);
    }
    return 0;
}