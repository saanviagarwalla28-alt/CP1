#include <stdio.h>

int main()
{
    int a[10], b[10], i, n, choice;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
        b[i] = 0;
    }
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);
    printf("Enter 1 for left shift, 2 for right shift: ");
    scanf("%d", &choice);
    for (i = 0; i < 10; i++)
    {
        if (choice == 1 && i + n < 10)
            b[i] = a[i + n];
        else if (choice == 2 && i - n >= 0)
            b[i] = a[i - n];
    }
    printf("Array after shifting:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
