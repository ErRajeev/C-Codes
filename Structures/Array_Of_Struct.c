// #include <stdio.h>
// #include <conio.h>
// int main(void)
// {
//     struct Emp
//     {
//         int eno;
//         char ename[20];
//         float esal;
//     };
//     int n, i;
//     printf("Enter How Many Emplyee Are There..\n");
//     scanf("%d", &n);
//     struct Emp e[n];
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter %d Emplyee No..\n", i);
//         scanf("%d", &e[i].eno);
//         printf("Enter %d Emplyee Name...\n", i);
//         scanf("%s", &e[i].ename);
//         printf("Enter %d Emplyee Salary...\n", i);
//         scanf("%f", &e[i].esal);
//     }
//     printf("Emplyee No.\tEmplyee Name\tEmplyee Salary\n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\t\t%s\t\t%f\n",e[i].eno,e[i].ename,e[i].esal);
//     }
//     getch();
//     return 0;
// }

#include <stdio.h>
#include <conio.h>
int main(void)
{
    struct Student
    {
        int sno;
        char sname[10];
        float smarks[2];
    };

    int n, i, j;
    printf("Enter How Many Students Are There..\n");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Student No..\n", i);
        scanf("%d", &s[i].sno);
        printf("Enter %d Student Name...\n", i);
        scanf("%s", &s[i].sname);
        for (j = 0; j <= 1; j++)
        {
            if (j == 0)
            {
                printf("Enter Maths Marks\n");
                scanf("%f", &s[i].smarks[j]);
            }
            else
            {
                printf("Enter english Marks\n");
                scanf("%f", &s[i].smarks[j]);
            }
            // printf("Enter English Marks\n");
            // scanf("%f", &s[i].smarks[j]);
        }
        printf("Student Roll\tStudent Name\t\tStudent Marks\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t\t%s", s[i].sno, s[i].sname);
            for (j = 0; j <= 1; j++)
            {
                printf("\n%f\t", s[i].smarks[j]);
                // printf("%f\t", s[i].smarks[j]);
            }
        }

        getch();
        return 0;
}