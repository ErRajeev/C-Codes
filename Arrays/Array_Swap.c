// WAP to Swap Array Elements

#include <stdio.h>
#include <conio.h>
void arrprint(int [], int);
int main(void)
{
    int arr[50], n, i, j, temp = 0, len = -1;
    printf("Enter Size of Array..\n");
    scanf("%d", &n);
    printf("Enter %d Elements..\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        len++;
    }
    arrprint(arr, n);
    // Here Swap Logic...
    i = 0;
    j = len;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("After Swap Array...\n");
    arrprint(arr, n);
    getch();
    return 0;
}
    // Hear Array print...
void arrprint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}