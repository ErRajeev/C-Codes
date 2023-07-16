// #include<stdio.h>
// int arr[5];
// int main()
// {
//     int  i;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main(void)
// {
//     int arr[5] = {15,55,25}, i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     getch();
//     return 0;
// }

#include <stdio.h>
#include <conio.h>
int main(void)
{
    int arr[5], i, j, temp;
    printf("Enter 5 no\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("After Swap..\n");
    i = 0;
    j = 4;
     while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();
    return 0;
}