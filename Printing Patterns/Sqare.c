#include <stdio.h>
int main(void)
{
    int i, j, n;
    printf("Enter Row Size :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main(void)
// {
//     int i, j, n;
//     printf("Enter Row Size : \n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             printf("*\t");
//         }
//         printf("\n");
//     }
//     return 0;
// }