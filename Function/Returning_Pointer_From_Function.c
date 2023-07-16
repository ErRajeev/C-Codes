#include<stdio.h>
#include<conio.h>
int* rtnptr(int*);
int main(void)
{
    int arr[] = {1,3,4,8}, *p;
    // arr +=2;  // We Can't Add Number Hear, b/c Hear a is an array Which Contain Base Add Of that Arr
    p = rtnptr(arr);
    printf("%d", *p);

    getch();
    return 0;
}
int* rtnptr(int* arr)
{
    arr +=1; // Hear We Can Add Number B/c it's Arthematc Opration In Pointer
    return arr;
}