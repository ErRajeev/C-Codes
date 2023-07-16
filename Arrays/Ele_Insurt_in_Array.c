#include <stdio.h>
int main()
{
    int arr[50], i, n, key, loc;
    printf("Enter Size Of Array :\n");
    scanf("%d", &n);
    printf("Enter %d Elements :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Where To insurt :\n");
    scanf("%d", &loc);
    printf("Enter New Element For Insurt :\n");
    scanf("%d", &key);

    for (i = n - 1; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = key;
    printf("New Array is... ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}