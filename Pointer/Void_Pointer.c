// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     int a = 10;
//     void* ptr;
//     ptr = &a;
//     printf("%d", *prt);
//     getch();
//     return 0;
// }

    //Hear we can't directly accec, need type cast


#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a = 10;
    void* ptr;
    ptr = &a;
    printf("%d", *(int*)ptr);
    getch();
    return 0;
}