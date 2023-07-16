/* WAP to transpose of a matrix*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[2][3], i, j;
    printf("Enter 2:3 Matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix :-\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix :-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    getch;
    return 0;
}