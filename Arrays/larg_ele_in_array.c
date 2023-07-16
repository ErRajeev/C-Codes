// Find the largest Element in the Array

#include <stdio.h>
int main()
{
    int arr[5] = {102, 35, 75, 29, 61}, i, larg;
    larg = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (larg < arr[i])
        {
            larg = arr[i];
        }
    }
    printf("%d", larg);
    return 0;
}