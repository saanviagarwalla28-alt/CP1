#include <stdio.h>

int main()
{
    int i;
    float x, sum = 0, mean;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%f", &x);
        sum = sum + x;
    }
    mean = sum / 10;
    printf("Sum = %.2f\nMean = %.2f\n", sum, mean);
    return 0;
}
