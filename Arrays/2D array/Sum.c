/* WAP to print sum of indivisul row and colomn */

#include <stdio.h>
#include <conio.h>
int main(void)
{
    int arr[3][3], i, j, rc = 0, cc = 0;
    printf("Enter 3:3 Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix :- \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        int rsum = 0, csum = 0;
        for (j = 0; j < 3; j++)
        {
            rsum += arr[i][j];
            csum += arr[j][i];
        }
        rc++;
        cc++;
        printf("Sum of %d Row = %d & Sum of %d Coloumn = %d\n", rc, rsum, cc, csum);
    }
    getch();
    return 0;
}