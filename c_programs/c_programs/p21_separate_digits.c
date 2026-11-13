#include <stdio.h>

int main()
{
    int n, d = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n / d >= 10)
        d = d * 10;
    while (d > 0)
    {
        printf("%d ", n / d);
        n = n % d;
        d = d / 10;
    }
    printf("\n");
    return 0;
}
