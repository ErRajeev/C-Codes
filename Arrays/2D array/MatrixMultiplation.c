#include <stdio.h>
#include <conio.h>
int main(void)
{
    int arr1[3][3], arr2[3][3], arr3[3][3], i, j, k;
    printf("Enter 1st 3:3 Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("1st 3:3 Matrix :- \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter 2nd 3:3 Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("2nd 3:3 Matrix :- \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    // Here logic of matrix Multiplication

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    printf("Matrix Multiplication :-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}