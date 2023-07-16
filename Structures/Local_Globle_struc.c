/* Local Structure */
// Declearation inside the functions

#include <stdio.h>
#include <conio.h>
int main(void)
{
    struct emp
    {
        int eno;
        char ename[20];
        float esal;
    };
    struct emp e; // we acces inside only
    getch();
    return 0;
}

/* Gloable Structure */
// Declearation outside the Function
struct emp
{
    int eno;
    char ename[20];
    float esal;
};
#include<stdio.h>
#include<conio.h>
int main(void)
{
    struct emp e; 
    getch();
    return 0;
}
void check(void)
{
    struct emp a; // here we acces eithor inside or outside
}
