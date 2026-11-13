#include <stdio.h>

int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("4th value = %d\n", a[3]);
    printf("7th value = %d\n", a[6]);
    printf("9th value = %d\n", a[8]);
    return 0;
}
