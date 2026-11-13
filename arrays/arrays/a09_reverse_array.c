#include <stdio.h>

int main()
{
    int a[5], n, i, temp;
    printf("Enter number of elements (maximum 5): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
