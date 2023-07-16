// Avg of array

#include<stdio.h>
#include<conio.h>
int main(void)
{
    float arr[5], sum = 0, avg = 0;
    int i;
    printf("Enter Array Element..\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    avg = sum/5;
    printf("Avg = %f", avg);
    getch();
    return 0;
}