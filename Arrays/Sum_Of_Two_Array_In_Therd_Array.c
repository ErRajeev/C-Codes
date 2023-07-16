#include <stdio.h>
void main(void)
{
    int a[50], b[50], c[50], i, n, m;
    printf("Enter Size 1st Of Array..\n");
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

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }
}