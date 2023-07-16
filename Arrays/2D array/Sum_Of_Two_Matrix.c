/*WAP To Print Sum Of Tow Matrix*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int arr1[2][3], arr2[2][3], arr3[2][3], i, j;
    printf("Enter 1st 2:3 Matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("1st Matrix :- \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter 2nd Matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("2nd Matrix :- \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    // Here sum logic of matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Sum of 1st And 2nd Matrix :- \n");
    for (i = 0; i < 2; i++)
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