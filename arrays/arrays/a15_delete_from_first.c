#include <stdio.h>

int main()
{
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    if (n == 0)
    {
        printf("Array is empty\n");
        return 0;
    }
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
