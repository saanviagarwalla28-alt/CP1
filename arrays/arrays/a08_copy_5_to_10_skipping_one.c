#include <stdio.h>

int main()
{
    int a[5], b[10], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
        b[i] = 0;
    for (i = 0; i < 5; i++)
        b[2 * i] = a[i];
    printf("New array:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
