#include <stdio.h>

int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The values are:\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);
    return 0;
}
