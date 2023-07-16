/* Create A Matrix Using Nested Array */

#include <stdio.h>
#include <conio.h>
int main(void)
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
    printf("Resulet\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}