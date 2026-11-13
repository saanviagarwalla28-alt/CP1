#include <stdio.h>

int main()
{
    int n, i;
    float x, sum = 0, mean;
    printf("How many values? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%f", &x);
        sum = sum + x;
    }
    mean = sum / n;
    printf("Sum = %.2f\nMean = %.2f\n", sum, mean);
    return 0;
}
