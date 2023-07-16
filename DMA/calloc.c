// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, i, *arr;
//     printf("Enter Size of Array...\n");
//     scanf("%d", &n);
//     arr = (int *)calloc(n, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Out of Memory...\n");
//     }
//     else
//     {
//         printf("Array Elements Are..\n");
//         for (i = 0; i < n; i++)
//         {
//             printf("%d\t", *(arr + i));
//         }
//     }
//     getch();
//     return 0;
// }










// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, i, *arr;
//     printf("Enter Size of Array...\n");
//     scanf("%d", &n);
//     arr = (int *)malloc(n* sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Out of Memory...\n");
//     }
//     else
//     {
//         printf("Array Elements Are..\n");
//         for (i = 0; i < n; i++)
//         {
//             printf("%d\t", *(arr + i));
//         }
//     }
//     getch();
//     return 0;
// }