// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     int a = 5;
//     int *ptr;
//     printf("%d\n", &ptr);
//     printf("%d\n", ptr);
//     getch();
//     return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     int a = 10, b = 20;
//     int* p, *q;
//     p = &a;
//     printf("%d \t %d  \t %d  \t  %d", a, p, *p, &p);
//     getch();
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     int a = 10, r;
//     int* ptr = &a;
//     r = ptr + 2;
//     printf("%d %d", a, r);
//     getch();
//     return 0;
// }






// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     int arr[50];
//     int n;
//     printf("Enter Size of Array...\n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %d Number Element..\n", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nO/p\n\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     getch();
//     return 0;
// }





// #include<stdio.h>
// #include<conio.h>
// int main(void)
// {
//     int arr1[50], arr2[50], n, m, i, loc;
//     printf("Enter Size Of First Arrray...\n");
//     scanf("%d", &n);
//     printf("Enter %d Elements..\n", n);
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     printf("Enter Location For Insurt..\n");
//     scanf("%d", &loc);
//     loc = loc -1;
//     printf("Enter Size Of Second Array..\n");
//     scanf("%d", &m);

//     printf("Enter %d Elenments\n", m);
//     for ( i = 0; i < m; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }

//     for(i= n-1; i>=loc; i--)
//     {
//        arr1[i+m]  = arr1[i];
//     }
//     for ( i = 0; i < m; i++)
//     {
//         arr1[i + loc] = arr2[i];
//     }
    
    
//     printf("After Insurt\n");
//     for ( i = 0; i < n+m; i++)
//     {
//         printf("%d\n", arr1[i]);
//     }
//     getch();
//     return 0;
// }