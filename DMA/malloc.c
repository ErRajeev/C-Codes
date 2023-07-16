// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, i;
//     int *ptr;
//     printf("Enter a Number..\n");
//     scanf("%d", &n);
//     ptr = (int *)malloc(n * sizeof(int));
//     printf("Enter %d Numbres..\n", n);
//     if (ptr == NULL)
//         printf("Out of Memory Error....\n");
//     else
//     {
//         for (i = 0; i < n; i++)
//         {
//             scanf("%d", (ptr + i));
//         }
//         printf("The Numbers are..\n");
//         for (i = 0; i < n; i++)
//         {
//             printf("%d\t", *(ptr + i));
//         }
//     }
//     getch();
//     return 0;
// }











// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(void)
// {
//     struct Student
//     {
//         char sname[20];
//         int sid;
//         float smarks;
//     };
//     struct Student* ptr;
//     ptr = (struct Student*)malloc(sizeof(struct Student));
//     printf("Enter Student id..\n");
//     scanf("%d", &ptr->sid);
//     printf("Enter Student Name..\n");
//     scanf("%s",ptr->sname);
//     printf("Enter Student Marks..\n");
//     scanf("%f", &ptr->smarks);

//     printf("Student Details :\n\n");
//     printf("%d\t%s\t %f", ptr->sid, ptr->sname, ptr->smarks);
//     getch();
//     return 0;
// }





// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// int main(void)
// {
//     struct Emp
//     {
//         int eno;
//         char ename[20];
//         float esal;
//     };
//     struct Emp *ptr;
//     int i, n;
//     printf("Enter Number of Records...\n");
//     scanf("%d", &n);
//     ptr = (struct Emp *)malloc(n * sizeof(struct Emp));
//     if (ptr == NULL)
//     {
//         printf("Out Of Memory...\n");
//     }
//     else
//     {
//         for (i = 0; i < n; i++)
//         {
//             printf("Enter Employee %d Details :", i);
//             scanf("%d%s%f", &(ptr + i)->eno, (ptr + i)->ename, &(ptr + i)->esal);
//         }
//         for (i = 0; i < n; i++)
//         {
//             printf("Employee id : %d\tEmployee Name : %s\tEmployee Salary : %f\n", (ptr + i)->eno, (ptr + i)->ename, (ptr + i)->esal);
//         }
//     }
//     getch();
//     return 0;
// }