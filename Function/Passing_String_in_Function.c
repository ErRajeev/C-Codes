#include<stdio.h>
#include<conio.h>
void dis(char []);
int main(void)
{
    char str[20] = {"Rajev Ranjan"};
    dis(str);
    getch();
    return 0;
}
void dis(char a[])
{
    int i, count = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        count +=1;
    }
    printf("Length of %s is : %u", a, count);
}