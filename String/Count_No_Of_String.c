#include<stdio.h>
int stringlength(char []);
int main()
{
    char str[30];
    unsigned int len;
    printf("Enter a String..\n");
    gets(str);
    len = stringlength(str);
    printf("The Length Of %s is : %d", str, len);
    return 0;
}
int stringlength(char x[])
{
    int i =0 , count =0;
    while (x[i] != '\0')
    {
        count ++;
        i++;
    }
    return count;
}