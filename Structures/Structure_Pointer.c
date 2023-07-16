#include <stdio.h>
#include <conio.h>
struct Student
{
    int rno;
    char name[20];
    float marks;
} s = {1, "Rajeev", 99};
int main(void)
{
    struct Student *ptr = &s;
    printf("Roll No. = %d\nName = %s\nMarks = %f",ptr->rno, ptr->name, ptr->marks);
    getch();
    return 0;
}