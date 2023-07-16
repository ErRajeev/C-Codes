#include <stdio.h>
void main(void)
{
    int a[50], b[50], i, n, m, loc;
    printf("Enter Size Of Array..\n");
    scanf("%d", &n);
    printf("Enter %d Elements..\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Size Of 2nd Array :\n");
    scanf("%d", &m);
    printf("Enter %d Elements..\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Enter Where To Insert in 1st Array :\n");
    scanf("%d", &loc);

    for (i = n - 1; i >= loc; i--)
    {
        a[i + m] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        a[loc + i] = b[i];
    }
    printf("The New Array Is ...\n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d\t", a[i]);
    }
}