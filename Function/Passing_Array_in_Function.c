// Array passing in Function
// Note:- Array Always Pass through Call by Ref

void Add(int[], int);
int main()
{
    int arr[50], i, n;
    printf("Enter Size Of Array...\n");
    scanf("%d", &n);
    printf("Enter %d Elements\n", n);
    n -= 1;
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Add(arr, n);
}
void Add(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i <= n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum Of Array is = %d", sum);
}
