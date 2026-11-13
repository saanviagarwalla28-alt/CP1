#include <stdio.h>

int main()
{
    int n, i, a = 1, b = 1, c;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
