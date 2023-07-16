#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int i, n, m, *ptr;
    printf("Enter a Size..\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter a Values..\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Enter Update Number..\n");
    scanf("%d", &m);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    printf("Privous Add : %d\tNew Add : %d\n", ptr, ptr);
    for (i = 0; i <= n+m; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
    getch();
    return 0;
}