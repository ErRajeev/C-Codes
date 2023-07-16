#include<stdio.h>
#include<conio.h>
int main(void)
{
    struct Emp
    {
        int eno;
        char  ename[20];
        float esal;
    };
    struct Emp e = {001,"Rajeev Ranjan", 900000};
    printf("Emplyee Detail is...\n");
    printf("%d\t%s\t%f\n", e.eno, e.ename, e.esal);
    getch();
    return 0;
}