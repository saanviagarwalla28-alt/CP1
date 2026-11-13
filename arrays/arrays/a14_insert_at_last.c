#include <stdio.h>

int main()
{
    int a[100], n, i, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the new number: ");
    scanf("%d", &num);
    a[n] = num;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
