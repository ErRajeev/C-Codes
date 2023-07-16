// Find the sum of all Array Elements

#include <stdio.h>
int main(void)
{
    int arr[50], n, i, sum = 0;
    printf("Enter Size Of Array :\n");
    scanf("%d", &n);
    printf("Enter %d Elements :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum Of All Array Elements is : %d", sum);
    return 0;
}